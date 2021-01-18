/*************************************************************************
 * AUTHOR	 : Jeffrey Roe
 * **********************************************************************/

#ifndef GRAPH_H_
#define GRAPH_H_

#include "vertex.h"

class graph {
public:
	graph();
	void insert(vertex Element);
	void printgraph();
	void dfs();
	void newdfs(int key);
	void newdfsrec(int v , bool visited[]);
	int vertexsize();
	vertex getvertex(int key);
	vector<vertex> getvertexes();
	int getlocation(int V);
	void shortestPath(int myvertex);
	void initalweights();
	void alphaprint();


private:
	vector<vertex> myvertex;

	int **weights;
	int *smallestweight;

};

#endif /* GRAPH_H_ */
