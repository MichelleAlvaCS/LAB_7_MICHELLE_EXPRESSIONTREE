#include <iostream>
#include <string>
#include "tree.h"

using namespace std;

int main() {

	int userChoice;
	string expressionString;

	fstream fin;
	fin.open("Expressions.txt");

	if (!fin.is_open()) {
		cout << "Error opening file" << endl;
		return 0;
	}

	while (!fin.eof()) {

		fin >> expressionString;
		//buildtree

		//for (int i = 0; i < expressionString.length(); i++) {

		//	//insert expressionString[i];
		//
		}

		fin.close();

		do {

			cout << "Welcome to the expression tree menu."
				"\n\nPlease make a choice: "
				"\n1. Print PreOrder"
				"\n2. Print InOrder"
				"\n3. Print PostOrder"
				"\n4. Quit"
				<< endl;

			cin >> userChoice;

			switch (userChoice) {

			case 1:break;
				//print preorder function
			case 2:break;
				//print inorder function
			case 3:break;
				//print postorder function
			case 4: cout << "Quiting Program" << endl;
			default: cout << "Error. Please choose a number from 1-4";
				break;

			}

		} while (userChoice != 4);

		cout << "Thank you for using the expression tree menu." << endl;
		return 0;
	}

