/*main.cpp, Project 3a.
Andrea Matellian and Nathan Newbury
ID: MATNEW
this file contains the main program
*/

#include <iostream>
#include "dictionary.h"
#include "grid.h"

using namespace std;

void findMatches()
{
	dictionary play;
	grid g1;
	cout << "The sorted dictionary is: \n\n";
	play.selectionSort();
	//cout << play;
	system("pause");
	//g1.findCandidate();
	
}

int main()
{
	findMatches();

	return 0;
}