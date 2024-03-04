#pragma once
#include "unorderedLinkedList.h"

class intLinkedList: public unorderedLinkedList<int>
{
	public:
		void splitEvensOddsList(intLinkedList &evensList, intLinkedList &oddsList);
		// Precond: A pre-existing linked list of integers is formed
		// Postcond: Said list is 'split' into an evens list and an odds list, before the original list is destroyed
		//			L> Evens: Contains only the original list's even numbers
		//			L> Odds: Contains only the original list's odd numbers

};

void intLinkedList::splitEvensOddsList(intLinkedList &evensList, intLinkedList &oddsList)
{
	nodeType<int> *current;

	current = this->first; //Sets this pointer to the first entry

	while (current != nullptr)
	{
		if (current->info % 2 == 0)
		{
			if (evensList.first == nullptr)
			{
				evensList.first = current;
			}
			else
			{
				evensList.last->link = current;
			}
			evensList.last = current;
			evensList.count++;
			//evensList.print();
			current = current->link;
			//cout << endl;
			evensList.last->link = nullptr;
		}

		else
		{
			if (oddsList.first == nullptr)
			{
				oddsList.first = current;
			}
			else
			{
				oddsList.last->link = current;
			}
			oddsList.last = current;
			oddsList.count++;
			//oddsList.print();
			current = current->link;
			//cout << endl;
			oddsList.last->link = nullptr;
		}
	}

	this->first = nullptr;
	this->last = nullptr;
	this->count = 0;
}
