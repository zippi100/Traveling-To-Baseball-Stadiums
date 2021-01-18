/*************************************************************************
 * AUTHOR	 : Jeffrey Roe
 * **********************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include  <string>
#include  <vector>
#include <iomanip>
#include <limits>
#include <iomanip>
#include <fstream>
using namespace std;


enum grassType
{
	YESGRASS,
	NOGRASS
};

enum leagueType
{
	AML,
	NLT
};

enum MainMenu
{
	EXITM,
	DISPLAY,
	PLAN,
	RANDOMSATDIUM,
	ADMIN
};

enum teammenu
{
	EXITT,
	STADIUMNAME,
	TEAMNAME,
	ALNAME,
	NLNAME,
	GRASS,
	DATE
};

enum trip
{
	EXITTR,
	ALLMAJOR,
	ALLAL,
	ALLNL,
	CUSTOM,
	DISTANCEOFTWO
};

enum admin
{
    EXITA,
	MODIFYTEAM,
	ADDTEAM,
	MODIFYSOUVENIRS

};

#endif /* HEADER_H_ */
