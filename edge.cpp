/*************************************************************************
 * AUTHOR	     : Alex Adam
 * ASSIGNMENT #12: DFS
 * CLASS         : CS1D
 * SECTION       : MW: 5:30 - 7:20p
 * DUE DATE      : 4/21/14
 * **********************************************************************/

#include "edge.h"
#include "header.h"

edge::edge() {

	origin = 0;
		destination = 0;
		distance = 0;
}

edge::edge(int O, int Dest, int Dist)
{
	origin = O;
	destination = Dest;
	distance = Dist;
}
int edge::getOrigin()
{
	return origin;
}

int edge::getdestination()
{
	return destination;
}


int edge::getdistance()
{
	return distance;
}
