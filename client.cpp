#pragma once
#include "intLinkedList.h"

int main()
{
	intLinkedList numsList; //Original list of numbers
	intLinkedList evens; //Split sublist of only even numbers from original list
	intLinkedList odds; //Split sublist of only odd numbers from original list
	linkedListIterator<int> listPtr; //Pointer of original list
	linkedListIterator<int> evenPtr; //Pointer of evens list
	linkedListIterator<int> oddPtr; //Pointer of odds list

	int input = 0; //Input variable for list entries
	
	cout << "Please input integers for list. Use -999 to end the list." << endl;
	//Following while loop constructs original list via user input
	while (input != -999)
	{
		cin >> input;
		if (input != -999)
			numsList.insertLast(input);
	}

	//Prints original list
	cout << endl << "Original: ";
	for (listPtr = numsList.begin(); listPtr != numsList.end(); ++listPtr)
		cout << *listPtr << " ";
	
	//Splits the list into evens and odds lists
	cout << endl << endl << "Splitting the list... " << endl;
	numsList.splitEvensOddsList(evens, odds);

	//Prints the evens list
	cout << endl << "Evens: ";
	for (evenPtr = evens.begin(); evenPtr != evens.end(); ++evenPtr)
		cout << *evenPtr << " ";
	
	//Prints the odds list
	cout << endl << "Odds: ";
	for (oddPtr = odds.begin(); oddPtr != odds.end(); ++oddPtr)
		cout << *oddPtr << " ";

	//Prints the original list again, ensuring it is empty
	cout << endl << "Original (After Split, making sure it is empty): ";
	for (listPtr = numsList.begin(); listPtr != numsList.end(); ++listPtr)
		cout << *listPtr << " ";
	
	cout << endl;



	return 0;
}