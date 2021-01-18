/*************************************************************************
 * AUTHOR	 : Jeffrey Roe
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
