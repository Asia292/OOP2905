/*!
\file menue.h
*/

/*!
\class menue
\brief Defines the menue and its functions
*/



#pragma once

#include <string>
#include <memory>
#include <iostream>

#include "linkedList.h"

using namespace std;

template <class G>
class menue
{
private:
	int selection; //!< the function selected by user
	G element; //!< the new element to be added
	int returnMenue; //!< if the user wants to return to the menue

public:
	linkedList<G> list; //!< an object made from class linkedList

//! Function to initialize the menu - default constructor
	menue()
	{
		options();
	}

	//! Function to display options
	void options()
	{
		system("CLS");

		cout << "Double Linked List Operations" << endl << endl;
		cout << " 1 - Add element at front" << endl;
		cout << " 2 - Add element at back" << endl;
		cout << " 3 - Add element before current" << endl;
		cout << " 4 - Add element after current" << endl;
		cout << " 5 - Remove first  element" << endl;
		cout << " 6 - Remove last element" << endl;
		cout << " 7 - Look at first element" << endl;
		cout << " 8 - Look at last element" << endl;
		cout << " 9 - Look at current element" << endl;
		cout << " 10 - Traverse forwards" << endl;
		cout << " 11 - Traverse backwards" << endl;
		cout << " 12 - See size of list" << endl;
		cout << " 13 - Is list empty?" << endl;
		cout << " 14 - Print list" << endl;
		cout << " 15 - Exit" << endl;

		cin >> selection;

		switch (selection)
		{
		case(1): menue<G>::addStart();
			break;
		case(2): menue<G>::addEnd();
			break;
		case(3): menue<G>::addBefore();
			break;
		case(4): menue<G>::addAfter();
			break;
		case(5): menue<G>::removeFirst();
			break;
		case(6): menue<G>::removeLast();
			break;
		case(7): menue<G>::peekFirst();
			break;
		case(8): menue<G>::peekLast();
			break;
		case(9): menue<G>::peekCurr();
			break;
		case(10): menue<G>::moveForward();
			break;
		case(11): menue<G>::moveBack();
			break;
		case(12): menue<G>::listSize();
			break;
		case(13): menue<G>::isEmpty();
			break;
		case(14): menue<G>::printList();
			break;
		case(15): system("pause");
		}
	}

	//! Function to run process of adding element to front
	void addStart()
	{
		system("CLS");

		cout << " Enter element: ";
		cin >> element;

		list.pushFront(element);

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): addStart();
			break;
		}
	}

	//! Function to run process of adding element to back
	void addEnd()
	{
		system("CLS");

		cout << " Enter element: ";
		cin >> element;

		list.pushBack(element);

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): addEnd();
			break;
		}
	}
	
	//! Function to run process of adding element after current
	void addAfter()
	{
		system("CLS");

		cout << " Enter element: ";
		cin >> element;

		list.pushAfter(element);

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): addAfter();
			break;
		}
	}

	//! Function to run process of adding element before current
	void addBefore() 
	{
		system("CLS");

		cout << " Enter element: ";
		cin >> element;

		list.pushBefore(element);

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): addBefore();
			break;
		}
	}

	//! Function to run process of removing first element
	void removeFirst() 
	{
		system("CLS");

		cout << "Removed " << list.popFirst() << " from list" << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): removeFirst();
			break;
		}
	}

	//! Function to run process of removing last element
	void removeLast() 
	{
		system("CLS");

		cout << "Removed " << list.popLast() << " from list" << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): removeLast();
			break;
		}
	}

	//! Function to view first element in list
	void peekFirst() 
	{
		system("CLS");


		cout << "First element is: " << list.getFront() << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): peekFirst();
			break;
		}
	}

	//! Function to view last element in list
	void peekLast() 
	{
		system("CLS");

		cout << "Last element is: " << list.getBack() << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): peekLast();
			break;
		}
	}

	//! Function to view current element in list
	void peekCurr()
	{
		system("CLS");

		cout << "Current element is: " << list.getCurr() << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): peekCurr();
			break;
		}
	}

	//! Function to move forward one element in list
	void moveForward() 
	{
		system("CLS");

		list.moveForward();

		cout << "Current element now is: " << list.getCurr() << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): moveForward();
			break;
		}
	}

	//! Function to move backward one element in list
	void moveBack() 
	{
		system("CLS");

		list.moveBack();

		cout << "Current element now is: " << list.getCurr() << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): moveBack();
			break;
		}
	}

	//! Function to view list size
	void listSize() 
	{
		system("CLS");

		cout << "The size of the list is " << list.currSize() << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): listSize();
			break;
		}
	}

	//! Function to see if list is empty
	void isEmpty() 
	{
		system("CLS");

		if (list.empty() == true)
			cout << "List is empty" << endl;
		else
			cout << "List is not empty" << endl;

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): isEmpty();
			break;
		}
	}

	//! Function to print the list
	void printList()
	{
		system("CLS");

		cout << "List is:" << endl;

		list.printList();

		cout << "1 - Retrun menue" << endl << "2 - Do function again" << endl;
		cin >> returnMenue;

		switch (returnMenue)
		{
		case (1): options();
			break;
		case (2): printList();
			break;
		}
	}

};
