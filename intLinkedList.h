#pragma once
#include "unorderedLinkedList.h"

class intLinkedList: public unorderedLinkedList<int>
{
	public:
		void splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList);
		// Precond: A pre-existing linked list of integers is formed
		// Postcond: Said list is 'split' into an evens list and an odds list, before the original list is destroyed
		//			L> Evens: Contains only the original list's even numbers
		//			L> Odds: Contains only the original list's odd numbers

};

void intLinkedList::splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList)
{
	nodeType<int> *current; //Creates a node pointer

	current = this->first; //Sets the pointer to the first entry

	while (current != nullptr)
	{
		if (current->info % 2 == 0)
		{
			evensList.insertLast(current->info); //Adds the current node as the next entry in the evens entry
			current = current->link; //Moves the pointer to the next entry
		}
		else
		{
			oddsList.insertLast(current->info); //Adds the current node as the next entry in the odds entry
			current = current->link; //Moves the pointer to the next entry
		}
	}

	destroyList(); //Destroys the original list
}
