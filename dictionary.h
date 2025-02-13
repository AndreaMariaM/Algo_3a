/*dictionary.h, Project 3a.
Andrea Matellian and Nathan Newbury
ID: MATNEW
this file contains the dictionary class, which reads
words from the dictionary file and stores them in a vector.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std; 

#ifndef DICTIONARY_H
#define DICTIONARY_H

class dictionary
{
public:

	//constructor import the dictionary file and read it
	dictionary();

	//overloaded operator to print the final word list
	friend ostream& operator<< (ostream &ostr, vector dictionary& result);
	
	//funtion that sorts the words using selection sort
	void selectionSort();
	
	//funtion to handle word lookups using binary search
	string binarySearch(string grid& candidate);

	//destructor
	~dictionary();

private:

	//vector with all the words from the dictionary file
	vector<string> d;

	//vector with the results that are grid members that were found in the dictionary
	vector<string> result; 
};
#endif // !D_H
// ***********************************************************

//     dictionary class implementation

// ***********************************************************

dictionary::dictionary()
{	
	//constructor - open dictionary file and read it then push words into vector d as strings 
	ifstream fin;	//object
	string fileName = "dictionary";
	fin.open(fileName.c str());
	if (!fin)
	{
		//error handling
		cout << "The file can't be opened.\n\n";
	}
	int arg;
	string word;

	//get number of words in the file
	istream_iterator<string> in{ fin }, end;
	cout << "Word Count: " << distance(in, end) << endl;

	//push words into the vector d and also print to screen for testing
	cout << "The dictionary contains the words: \n";
	while (!file.eof())
	{
		d.push_back(word);
	}

	//print to screen for testing purposes
	size = distance(in, end);
	for (int i = 0; i < size; i++)
	cout << d[i];

	//close the file
	fin.close(fileName);
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
