/*************************************************************************
 * AUTHOR	     : Alex Adam
 * ASSIGNMENT #12: DFS
 * CLASS         : CS1D
 * SECTION       : MW: 5:30 - 7:20p
 * DUE DATE      : 4/21/14
 * **********************************************************************/

#include "vertex.h"

vertex::vertex() {


	grass = NOGRASS;
	 league= AML;
	 key=0;
	 numberofEdges=0;
}



void vertex::addedge(int O, int Dest, int Dist) {
	edge newedge(O, Dest, Dist);
	edges.push_back(newedge);
}

void vertex::printedge() {

	unsigned int index = 0;

	for(index = 0 ; index > edges.size() ; index++)
	{
		cout << "Origin is " << edges[index].getOrigin() << endl;
		cout << "Destination is" << edges[index].getdestination() << endl;
		cout << "Distance is" << edges[index].getdistance() << endl;
	}

}

vector<edge> vertex::getedges() {
	return edges;
}


int vertex::edgesize() {
	return edges.size();
}

string vertex::getName() {
	return stadiumName;
}

int vertex::getkey() {
	return key;
}




void vertex::changestadiumName(string E) {
	stadiumName = E;
}


int vertex::getedgesize() {
	return numberofEdges;
}

void vertex::setteaminfo(string fstadiumName, string fteamName,
		string fstreetAddress, string fcityStZip, string fphoneNumber,
		string fdateOpened, string fseatingCapacity, grassType fgrass,
		leagueType fleague, int fkey, int fnumberofEdges)
{


	stadiumName = fstadiumName;
	teamName =fteamName;
	streetAddress =fstreetAddress ;
	cityStZip =fcityStZip ;
	phoneNumber =fphoneNumber ;
	dateOpened = fdateOpened;
	seatingCapacity =fseatingCapacity;
	grass =fgrass;
	league =fleague;
	key =fkey;
	numberofEdges =fnumberofEdges;
}



void vertex::getteaminfo(string& fstadiumName, string& fteamName, string& fstreetAddress, string& fcityStZip, string& fphoneNumber,
		string& fdateOpened, string& fseatingCapacity, grassType& fgrass, leagueType& fleague, int& fkey, int& fnumberofEdges)
{
	fstadiumName = stadiumName;
	fteamName =teamName;
	fstreetAddress = streetAddress;
	fcityStZip = cityStZip;
	fphoneNumber = phoneNumber;
	fdateOpened = dateOpened;
	fseatingCapacity =seatingCapacity;
	fgrass =grass;
	fleague = league;
	fkey =key;
	fnumberofEdges = numberofEdges;
}
