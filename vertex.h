/*************************************************************************
 * AUTHOR	 : Jeffrey Roe
 * **********************************************************************/

#ifndef VERTEX_H_
#define VERTEX_H_


#include "edge.h"
class vertex {
public:
	vertex();
	void addedge(int O, int Dest, int Dist);
	void printedge();
	void setteaminfo(string fstadiumName, string fteamName, string fstreetAddress, string fcityStZip, string fphoneNumber,
	string fdateOpened, string fseatingCapacity, grassType fgrass, leagueType fleague, int fkey, int fnumberofEdges);

	void getteaminfo(string& fstadiumName, string& fteamName, string& fstreetAddress, string& fcityStZip, string& fphoneNumber,
	string& fdateOpened, string& fseatingCapacity, grassType& fgrass, leagueType& fleague, int& fkey, int& fnumberofEdges);

	vector<edge> getedges();
	string getName();
	int getkey();
	void changestadiumName(string E);
	int getedgesize();
	int edgesize();


private:
	string stadiumName;
	string teamName;
	string streetAddress;
	string cityStZip;
	string phoneNumber;
	string dateOpened;
	string seatingCapacity;
	grassType grass;
	leagueType league;
	int key;
	int numberofEdges;
	vector<edge> edges;
};

#endif /* VERTEX_H_ */
