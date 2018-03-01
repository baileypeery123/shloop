/*
 * main.cc
 *
 *  Created on: Nov 15, 2017
 *      Author: owner
 */

#include <iostream>
#include <fstream>
#include <list>

#include "homes.h"

using namespace std;

int menu();

int main(){
	Home *tmp;
	list<Home*> homes;
	int code;
	string lines;
	ifstream infile;
	ofstream outfile;

	infile.open("homes.dat");
	if (infile.fail()) {
		cout << "No valid input file!" << endl;
		return 1;
		}

	while (getline(infile, lines)) {
		if (infile.eof())
			break;

		if (lines == "HORSE HOUSE") {
			tmp = new Horse;
			tmp->input(infile);
			homes.push_back(tmp);
		}
		else if (lines == "FISH HOUSE") {
			tmp = new Fish;
			tmp->input(infile);
			homes.push_back(tmp);
		}
		else if (lines == "DOG HOUSE") {
			tmp = new Dog;
			tmp->input(infile);
			homes.push_back(tmp);
		}
		else if (lines == "HAMSTER HOUSE") {
			tmp = new Hamster;
			tmp->input(infile);
			homes.push_back(tmp);
		}
		else if (lines == "DRAGON HOUSE") {
			tmp = new Dragon;
			tmp->input(infile);
			homes.push_back(tmp);
		}
	}
	infile.close();

	do {
		code = menu();
		switch (code)
		{
		case 1:
			tmp = new Horse;
			tmp->input(cin);
			homes.push_back(tmp);
			break;
		case 2:
			tmp = new Fish;
			tmp->input(cin);
			homes.push_back(tmp);
			break;
		case 3:
			tmp = new Dog;
			tmp->input(cin);
			homes.push_back(tmp);
			break;
		case 4:
			tmp = new Hamster;
			tmp->input(cin);
			homes.push_back(tmp);
			break;
		case 5:
			tmp = new Dragon;
			tmp->input(cin);
			homes.push_back(tmp);
			break;
		case 6:
			for (list<Home*>::iterator it = homes.begin(); it != homes.end(); ++it)
				(*it)->output(cout);
			break;
		case 0:
			cout << "Thank you for using the House Builder Program.\n";
			cout << "All alterations to the records will now be saved.\n";
			for (list<Home*>::iterator it = homes.begin(); it != homes.end(); ++it)
				(*it)->output(outfile);
			outfile.close();
			break;
		default:
			cout << "Not a valid choice. Please choose again. \n";
			break;
		} // bottom of the switch
	} while (code != 0);

	outfile.open("homes.dat");
	for (list<Home*>::iterator it = homes.begin(); it != homes.end(); ++it)
		(*it)->output(outfile);
	outfile.close();

	return 0;
}


int menu()
{
	int code;
	cout << "Build A House. Please choose from the following:\n";
	cout << "1) Build a house for a Horse.\n";
	cout << "2) Build a house for a Fish.\n";
	cout << "3) Build a house for a Dog.\n";
	cout << "4) Build a house for a Hamster.\n";
	cout << "5) Build a house for a Dragon.\n";
	cout << "6) Show record of houses built.\n";
	cout << "0) Quit.\n";
	cin >> code;
	return code;
}
