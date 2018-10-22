#include "d_matrix.h"
#include <iostream>
#include <fstream>
#include <math.h>

class grid
{
	public:
		//constructor to open grid file, read it and create vector
		grid();

		//function to find the candidate words
		string findCandidates();

		//string for candidate word
		string cand;

	private:
		matrix<string> m1; 
};

grid::grid()
{
	vector<char> temp;	//temporary vector
	char letter;
	int dimensions;
	int counter = 0;
	ifstream fin;
	string filename;

	//ask user which grid to use 
	cout << "Please enter the grid you wish to use, include .txt : " << endl;
	cin >> filename;

	fin.open(filename.c_str());
	if (!fin)
	{
		cout<<"the file can not be opened"<<endl;	
		system("pause");
		exit(1);
	}

	// find size of the matrix
	while(!fin.eof())
	{
		counter ++;	
		fin >> letter;
		//cout << letter << " ";
		temp.push_back(letter);
	}
	dimensions = pow(counter, 0.5);
	cout << "\ndimensions of grid are: " << dimensions << endl << endl;
	//system("pause");

	m1.resize(dimensions, dimensions);
	counter = 0;
	cout<<endl;
	for(int i = 0; i < dimensions; i++)
	{
		for(int j = 0; j < dimensions; j++)
		{
			cout<< temp[counter*dimensions +j] << " "; 
			m1[i][j] = temp[counter*dimensions + j];

		}
		cout << endl;
		counter ++;
	}
	system("pause");

	/*
	cout<<"temporary vector: "<<endl;
	cout<< temp[4]<<endl;
	cout<<"1 , 3 "<<endl;
	cout<<endl<<m1[1][3]<<endl;
	cout<<"3 , 4"<<endl;
	cout<<m1[3][4]<<endl;
	*/
	fin.close();
}

string grid::findCandidates()
{

	return cand;
}

