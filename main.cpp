

#include "graph.h"
//void IOFILE(linkedListType<CustomerType> &somecustomer);
//void SendPamphlet(linkedListType<CustomerType> &somecustomer);
//void ChangeInfo(linkedListType<CustomerType> &somecustomer);
//void Change(linkedListType<CustomerType> &somecustomer, int menu);
//void ReadFile(linkedListType<string> &testimonial);
//void ErrorCheckInterest(string &customerInterest, string &customerKey);
//void OUTFILE(linkedListType<CustomerType> &somecustomer);
//void AddCustomer(linkedListType<CustomerType> &somecustomer);
//void DeleteCustomer(linkedListType<CustomerType> &somecustomer);
//void AddTestimonials(linkedListType<string> &testimonial);
//void PrintWholePamphlet(linkedListType<string> &testimonial);
//void PrintPamphlet(linkedListType<string> &testimonial);
//int  keySearch(linkedListType<CustomerType> &somecustomer);
//void PrintCustomer(linkedListType<CustomerType> &somecustomer);
//void ErrorCheck(int &MenuChoice);
//void PrintSalesPitch();
//void PrintPhysicalEnv();
//void PrintConcept();
//void PrintPricing();
//void PrintMaintenance();
//void PrintGaurantee();
//void PrintContact();
//void PrintMenu();
//void Description();

void inputfile(graph& mygraph);
void outputfile(graph& mygraph);
void PrintMenuMain();
void ErrorCheckMain(int& MenuChoice);
void Description();
void DisplayStadiumMenu();
void ErrorCheckDisplayStadium(int& MenuChoice);

int main()
{

//graph mygraph;
//inputfile(mygraph);

int                           MenuChoice;  // menu option choice

Description();

// prints main menu
PrintMenuMain();

//error checks main menu choice
ErrorCheckMain(MenuChoice);


// checks menu choice
while (MainMenu(MenuChoice) != EXITM)
{
	system("cls");
	switch(MainMenu(MenuChoice))
	{

	      case DISPLAY:      DisplayStadiumMenu();
	    	                 ErrorCheckDisplayStadium(MenuChoice);
	      // adds customer to list

	    	                  break;
	      case PLAN:        // deletes customer from list

	    	                  break;
	      case RANDOMSATDIUM: // PRINT customer info

	    	                  break;
	      case ADMIN:        // Chanegs customer info

	    	                  break;
	      case EXITM:
	    	                  break;
	    	                  // ERROR
	      default:            cout << "Opps!!" << endl << endl;
	    	                  break;
	}

	cout << endl << endl << endl
		 << "<When Done Viewing  Info Press \"ENTER\" To Go Back To Main Menu>";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	system("cls");

	Description();

	// prints main menu
	PrintMenuMain();

	//error checks main menu choice
	ErrorCheckMain(MenuChoice);
}

cout << "\nEnd of program";

	return 0;
}

void Description()
{
	cout << "Desc goes here...." << endl << endl;
}

void PrintMenuMain()
{
	cout << endl << endl << endl << "MAIN MENU (Enter a number between 0 - 4)" << endl;

		cout << "Enter " <<  DISPLAY    << " - To Display Team and Stadium Info" << endl
			 << "Enter " <<  PLAN << " - To Plan a Dream Vacation to Major League Stadiums" << endl
			 << "Enter " <<  RANDOMSATDIUM << " - To Print Stadium Info. for Specific Team" << endl
			 << "Enter " <<  ADMIN << " - To Access Admin Screen" << endl
			 << "Enter " <<  EXITM   << " - To Exit";

}

void DisplayStadiumMenu()
{
	cout << endl << endl << endl << "TEAM/STADIUM MENU (Enter a number between 0 - 6)" << endl;

	cout << "Enter " <<  STADIUMNAME    << " - To Display All Major League Stadiums Sorted By  Stadium Name" << endl
		 << "Enter " <<  TEAMNAME << " - To Display All Major League Stadiums Sorted By Team Name" << endl
		 << "Enter " <<  ALNAME  << " - To Display All American League Stadiums Sorted By Team Name" << endl
		 << "Enter " <<  NLNAME  << " - To Display All National League Stadiums Sorted By Team Name" << endl
		 << "Enter " <<  GRASS   << " - To Display All Stadiums That Have A Grass Surface Sorted By Team Name" << endl
	     << "Enter " <<  DATE    << " - To Display All Stadiums In Chronological Order By Date Opened" << endl
	     << "Enter " <<  EXITT   << " - To Return to Main Menu";

}


void DisplayTripMenu()
{
	cout << endl << endl << endl << "Trip MENU (Enter a number between 0 - 5)" << endl;

	cout << "Enter " <<  ALLMAJOR    << " - To Begin Journey to All MAjor League Stadiums" << endl
		 << "Enter " <<  ALLAL << " - To Begin Journey to All American League Stadiums"  << endl
		 << "Enter " <<  ALLNL  << " - To Begin Journey to All National League Stadiums" << endl
		 << "Enter " <<  CUSTOM  << " - To Customize Journey to ANY League Stadiums"  << endl
		 << "Enter " <<  DISTANCEOFTWO   << " - To Display Distances Between Any Two Stadiums" << endl
	     << "Enter " <<  EXITT   << " - To Return to Main Menu";

}
void ErrorCheckDisplayStadium(int& MenuChoice)
{
	try{
		cout << endl << endl << "Enter a Menu Choice: ";
		if(!(cin >> MenuChoice))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			throw MenuChoice;
		}
		else if(MenuChoice > 6 || MenuChoice < 0)
		{
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			throw MenuChoice;
		}
	}
	catch(...){
		system("cls");
		cout << endl << endl << "Please Enter a Valid Menu Choice!!! ";
		DisplayStadiumMenu();
		cout << endl << endl << "Enter a Menu Choice: ";
		while (!(cin >> MenuChoice) || (MenuChoice > 6 || MenuChoice < 0))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			system("cls");
			cout << endl << endl << "Please Enter a Valid Menu Choice!!! ";
			DisplayStadiumMenu();
			cout << endl << endl << "Enter a Menu Choice: ";
		}
	}
}



void ErrorCheckMain(int& MenuChoice)
{
	try{
		cout << endl << endl << "Enter a Menu Choice: ";
		if(!(cin >> MenuChoice))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			throw MenuChoice;
		}
		else if(MenuChoice > 4 || MenuChoice < 0)
		{
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			throw MenuChoice;
		}
	}
	catch(...){
		system("cls");
		cout << endl << endl << "Please Enter a Valid Menu Choice!!! ";
		PrintMenuMain();
		cout << endl << endl << "Enter a Menu Choice: ";
		while (!(cin >> MenuChoice) || (MenuChoice > 4 || MenuChoice < 0))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			system("cls");
			cout << endl << endl << "Please Enter a Valid Menu Choice!!! ";
			PrintMenuMain();
			cout << endl << endl << "Enter a Menu Choice: ";
		}
	}
}

void inputfile(graph& mygraph)
{
int index, size, count;
ifstream inFile;
string fstadiumName;
string fteamName;
string fstreetAddress;
string fcityStZip;
string fphoneNumber;
string fdateOpened;
string fseatingCapacity;
grassType fgrass;
leagueType fleague;
int fkey = 0;
int fnumberofEdges = 0;
int origin = 0;
int Dest = 0;
int Dist = 0;
bool mygrass, myleague;


inFile.open("input.txt");

inFile >> size;
inFile.ignore(numeric_limits<streamsize>::max(), '\n');



vertex myvertex[size];

for(index = 0 ; index < size ; index++)
{

	getline(inFile, fstadiumName);
	getline(inFile, fteamName);
	getline(inFile, fstreetAddress);
	getline(inFile, fcityStZip);
	getline(inFile, fphoneNumber);
	getline(inFile, fdateOpened);
	getline(inFile, fseatingCapacity);

	inFile >> mygrass;
	inFile >> myleague;


	fgrass = grassType(mygrass);
	fleague = leagueType(myleague);


	inFile >> fkey;
	inFile >> fnumberofEdges;


	myvertex[index].setteaminfo(fstadiumName, fteamName,
			 fstreetAddress,  fcityStZip,  fphoneNumber,
			 fdateOpened,  fseatingCapacity,  fgrass,
			 fleague,  fkey,  fnumberofEdges);

	for(count = 0 ; count < fnumberofEdges ; count++)
	{
		inFile >> Dest;
		inFile >> Dist;
		myvertex[index].addedge(fkey, Dest, Dist);
	}

	inFile.ignore(numeric_limits<streamsize>::max(), '\n');
	mygraph.insert(myvertex[index]);

}


inFile.close();


}


void outputfile(graph& mygraph)
{
	unsigned int index;
	int count;
	string fstadiumName;
	string fteamName;
	string fstreetAddress;
	string fcityStZip;
	string fphoneNumber;
	string fdateOpened;
	string fseatingCapacity;
	grassType fgrass;
	leagueType fleague;
	int fkey;
	int fnumberofEdges;
	int origin;
	int Dest;
	int Dist;
	vector<edge> tempedge;

	ofstream outFile;

	vector<vertex> myvertex;

	myvertex = mygraph.getvertexes();

	outFile.open("input.txt");

	outFile << myvertex.size() ;
	outFile << endl;
	for(index = 0 ; index < myvertex.size() ; index++)
	{

		myvertex[index].getteaminfo(fstadiumName, fteamName,
				 fstreetAddress,  fcityStZip,  fphoneNumber,
				 fdateOpened,  fseatingCapacity,  fgrass,
				 fleague,  fkey,  fnumberofEdges);

		tempedge = myvertex[index].getedges();


		outFile << fstadiumName << endl;
		outFile << fteamName << endl;
		outFile << fstreetAddress << endl;
		outFile << fcityStZip << endl;
		outFile << fphoneNumber << endl;
		outFile << fdateOpened << endl;
		outFile << fseatingCapacity << endl;
		outFile << fgrass << endl;
		outFile << fleague << endl;
		outFile << fkey << endl;
		outFile << fnumberofEdges << endl;

		for(count = 0 ; count < fnumberofEdges ; count++)
		{
			origin = tempedge[count].getOrigin();
			Dest = tempedge[count].getdestination();
			Dist = tempedge[count].getdistance();

			outFile << origin;
			outFile << Dest;
			outFile << Dist;
		}



	}


	outFile.close();

}



