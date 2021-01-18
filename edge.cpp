/*************************************************************************
 * AUTHOR	 : Jeffrey Roe
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
