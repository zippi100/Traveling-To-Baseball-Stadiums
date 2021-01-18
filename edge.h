/*************************************************************************
 * AUTHOR	     : Alex Adam
 * ASSIGNMENT #12: DFS
 * CLASS         : CS1D
 * SECTION       : MW: 5:30 - 7:20p
 * DUE DATE      : 4/21/14
 * **********************************************************************/
#ifndef EDGE_H_
#define EDGE_H_


#include "header.h"


class edge {
public:
	edge();
	edge(int O, int Dest, int Dist);
	int getOrigin();
	int getdestination();
	int getdistance();




private:
	int origin;
	int destination;
	int distance;
};

#endif /* EDGE_H_ */
