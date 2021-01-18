/*************************************************************************
 * AUTHOR	 : Jeffrey Roe
 * **********************************************************************/
#include "graph.h"

graph::graph() {

}

void graph::insert(vertex Element) {

	myvertex.push_back(Element);
}


void graph::newdfs(int key) {

	bool visited[myvertex.size()];


	unsigned int index;
	for(index = 0 ; index < myvertex.size() ; index++)
	{
		visited[index] = false;
	}

	newdfsrec(key, visited);


}

void graph::alphaprint() {
	vector<vertex> othervertex;

	othervertex = myvertex;
	unsigned int index, smallestindex, location;
	vertex temp;

	for(index = 0 ; index < othervertex.size() ; index++)
	{
		smallestindex = index;
		for(location = index +1 ; location < othervertex.size() ; location++)

			if(othervertex[location].getName() < othervertex[smallestindex].getName())
				smallestindex = location;


		temp = othervertex[smallestindex];
		othervertex[smallestindex] = othervertex[index];
		othervertex[index] = temp;
	}

	printgraph();

}

void graph::newdfsrec(int v , bool visited[]) {

	visited[v] = true;

	cout << " " << myvertex[v].getName() << endl;  //visit the vertex

	vector<edge> tempedge;
	tempedge =  myvertex[v].getedges();

	for(unsigned int index = 0 ; index < tempedge.size() ; index++)
	{
		int w = getlocation(tempedge[index].getdestination());
		if(!visited[w])
			newdfsrec(w, visited);
	}

}

void graph::initalweights() {

    weights = new int*[myvertex.size()];

    for (unsigned int i = 0; i < myvertex.size(); i++)
        weights[i] = new int[myvertex.size()];

    smallestweight = new int[myvertex.size()];

    int maxweight = -99999;

    for(unsigned int j = 0; j < myvertex.size(); j++)
    {

    	for(unsigned int  n = 0; n < myvertex.size(); n++)
    	{
    		weights[j][n] = maxweight;

    	}

    }

vector<edge> tempedge;


for(unsigned int index = 0 ; index < myvertex.size(); index++)
{
	tempedge = myvertex[index].getedges();

}


}

void graph::shortestPath(int othervertex) {
unsigned int j , i , v;
int smallestweight[myvertex.size()];
vector<edge> smallestpath[myvertex.size()];
vector<edge> tempedge;
int tempkey;
int maxweight = 99999;
int minweight;


tempkey = getlocation(othervertex);
tempedge = myvertex[tempkey].getedges();


bool weightFound[myvertex.size()];



for(j = 0 ; j < myvertex.size() ; j++)
{
	smallestweight[j] = maxweight;
	weightFound[j] = false;
}
smallestweight[tempkey] = 0;
for(j = 0 ; j < tempedge.size() ; j++)
{
	smallestweight[ getlocation(tempedge[j].getdestination())] = tempedge[j].getdistance();
}


smallestweight[tempkey] = 0;
weightFound[tempkey] = true;

for(i = 0 ; i < myvertex.size() ; i++)
{
	minweight = maxweight;

	for(j = 0 ; j< myvertex.size() ; j++)
		if(!weightFound[j])
			if(smallestweight[j] < minweight)
			{
				v = j;
				minweight = smallestweight[v];
			}

	weightFound[v] = true;

	for(j = 0 ; j < tempedge.size()  ; j++)
		if(!weightFound[getlocation(j)])
			if(minweight + tempedge[j].getdistance()  <  smallestweight[   getlocation(tempedge[j].getdestination())]     )
				smallestweight[getlocation(j)] = minweight + tempedge[j].getdistance();


}


for(i = 0 ; i < myvertex.size() ; i++)
{
	cout << i << " Location " << weightFound[v] << endl;
	cout << smallestweight[i] << endl;
}
cout << "test done" << endl;
}

int graph::getlocation(int V) {


	int index = 0;

	while(!(V == myvertex[index].getkey()))
	{
		index++;
	}

	return index;
}




void graph::dfs()
{
	vector<bool> allvisited(12, false);

	vector<edge> temp;
	int current, next, index, last;
	string tempname;

	current = 0;

	while ( current != 11)
	{
		tempname = myvertex[current].getName();
		index = 0;
		cout << "Visiting " << tempname << endl;
		allvisited[current] = true;

		temp =  myvertex[current].getedges();
		next = temp[index].getdestination();

		if(allvisited[next] == false)
		{
			last = current;
			current = next;
		}
		else
		{
			while( allvisited[next] == true  &&  index <  myvertex[current].edgesize() -1)
			{
				index++;
				next = temp[index].getdestination();

			}
			if(index >= myvertex[current].edgesize()-1)
			{
				next = last;
				allvisited[next] = false;
			}
			else
			{
				last = current;
			}
			current = next;
		}
	}
	tempname = myvertex[current].getName();
	index = 0;
	cout << "Visiting " << tempname << endl;
}



void graph::printgraph() {

	vector<edge> temp;
	int index = 0;
	unsigned int count = 0;

	for(index = 0 ; index < vertexsize() ; index++)
	{
		temp =  myvertex[index].getedges();

		cout << "vertex is " << myvertex[index].getName() << endl;
		cout << "edges are " << endl;



		for(count = 0 ; count < temp.size() ; count++)
		{
			cout << "Destination is Key "<< temp[count].getdestination()  << endl;
			cout << "Distance is " << temp[count].getdistance() << endl;
		}





	}
}

vertex graph::getvertex(int key) {

	return myvertex[key];
}

vector<vertex> graph::getvertexes() {

	return myvertex;
}


int graph::vertexsize() {

	return myvertex.size();
}



