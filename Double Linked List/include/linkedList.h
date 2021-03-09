/*!
\file linkedList.h
*/

/*!
\class linkedList
\brief Allows list to be modified
*/



#pragma once

#include <string>
#include <memory>

#include "listNode.h"

using namespace std;

template <class G>

class linkedList
{
private:
	unsigned int size; //!< size of the list

	shared_ptr<listNode<G>> front; //!< points to front element
	shared_ptr<listNode<G>> back; //!< points to back element
	shared_ptr<listNode<G>> curr; //!< points to current element
	shared_ptr<listNode<G>> newNode;//!< points to node being created

	shared_ptr<listNode<G>> print;

public:

//! Function to create linked list - default constructor
	linkedList()
	{
		front = NULL;
		back = NULL;
		curr = NULL;

		size = 0;
	}

//! Function to see fist element
/*! return the first element in the list
*/
	G getFront() //!< returns front node
	{
		G frontData = front.get()->getData();

		return frontData;
	}

//! Function to see last element
/*! return the lasy element in the list
*/
	G getBack() //!< returns back node
	{
		G backData = back.get()->getData();

		return backData;
	}

//! Function to see current element
/*! return the current element in the list
*/
	G getCurr() //!< returns current node
	{
		G currData = curr.get()->getData();

		return currData;
	}

//! Function to traverses backwards in list
	void moveBack()
	{
		curr = curr.get()->getPrev();
	}

//! Function to traverses forwards in list
	void moveForward()
	{
		curr = curr.get()->getNext();
	}

//! Function to add element to front of list
/*! \param newElement a template - the new element to be added
*/
	void pushFront(G newElement)
	{
		shared_ptr<listNode<G>> newNode = shared_ptr<listNode<G>>(new listNode<G>(newElement, front, NULL));

		if (front != NULL)
			front->setPrev(newNode);

		if (back == NULL)
			back = newNode;

		front = newNode;
		curr = newNode;

		size++;
	}

//! Function to add element to back of list
/*! \param newElement a template - the new element to be added
*/
	void pushBack(G newElement) //!< adds an element to back of list
	{
		shared_ptr<listNode<G>> newNode = shared_ptr<listNode<G>>(new listNode<G>(newElement, NULL, back));

		if (front == NULL)
			front = newNode;

		if (back != NULL)
			back->setNext(newNode);

		back = newNode;
		curr = newNode;

		size++;
	}

//! Function to add element before current element
/*! \param newElement a template - the new element to be added
*/
	void pushBefore(G newElement)
	{
		shared_ptr<listNode<G>> newNode = shared_ptr<listNode<G>>(new listNode<G>(newElement, curr, curr.get()->getPrev()));
		curr->setPrev(newNode);
		newNode.get()->getPrev()->setNext(newNode);

		curr = newNode;

		size++;
	}

//! Function to add element after current element
/*! \param newElement a template - the new element to be added
*/
	void pushAfter(G newElement)
	{
		shared_ptr<listNode<G>> newNode = shared_ptr<listNode<G>>(new listNode<G>(newElement, curr.get()->getNext(), curr));
		curr->setNext(newNode);
		newNode.get()->getNext()->setPrev(newNode);

		curr = newNode;

		size++;
	}

//! Function to print the list
	void printList()
	{
		print = front;
		while (print != NULL)
		{
			if (print.get()->getNext() != NULL)
			{
				cout << print.get()->getData() << "<==>";
				print = print.get()->getNext();
			}
			else
			{
				cout << print.get()->getData();
				print = print.get()->getNext();
			}
		}
		cout << endl;
	}

//! Function to remove first element
/*! return the element removed
*/
	G popFirst()
	{
		G result = front.get()->getData();

		if (size != 1)
		{
			front = front.get()->getNext();
			front->setPrev(NULL);

			if (curr == front)
				curr = curr.get()->getNext();
		}
		else
		{
			back = NULL;
			print = NULL;
			curr = NULL;
			front = NULL;
		}

		size--;

		return result;
	}

//! Function to last first element
/*! return the element removed
*/
	G popLast()
	{
		G result = back.get()->getData();

		if (size != 1)
		{
			back = back.get()->getPrev();
			back->setNext(NULL);

			if (curr == back)
				curr = curr.get()->getPrev();
		}
		else
		{
			back = NULL;
			print = NULL;
			curr = NULL;
			front = NULL;
		}

		size--;

		return result;
	}

//! Function to see if list is empty
/*! return a boolean if true then list is empty
*/
	bool empty()  //!< is the list empty
	{
		if (size == 0)
			return true;

		return false;
	}


//! Function to see current size of list
/*! return the current size of list
*/
	int currSize()
	{
		return size;
	}

};