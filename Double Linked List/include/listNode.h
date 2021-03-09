/*!
\file listNode.h
*/

/*!
\class listNode
\brief Defines the nodes in the list, sets their structure
*/



#pragma once

#include <string>
#include <memory>


using namespace std;

template <class G>

class listNode
{
protected:
	shared_ptr<listNode<G>> prev;  //!< points to previous element
	shared_ptr<listNode<G>> next;  //!< points to nect element

	G data;  //!< data held at the node

public:
//! Deefault constructor - sets node structure
/*! \param newData a template - the data that is entered
\param newNext a pointer - sets pointer to the next node
\param newPrev a pointer - sets pointer to previous node
//*/
	listNode(G newData, shared_ptr<listNode<G>> newNext, shared_ptr<listNode<G>> newPrev)
	{
		data = newData;
		prev = newPrev;
		next = newNext;
	}

//! Function to get data
/*! return the value held at data
*/
	G getData()
	{
		return data;
	}

//! Function to get next node
/*! return the node next points at
*/
	shared_ptr<listNode<G>> getNext()  //!< returns next node
	{
		return next;
	}

//! Function to get previous node
/*! return the node prev points at
*/
	shared_ptr<listNode<G>> getPrev()  //!< returns previous node
	{
		return prev;
	}

//! Function to set data
/*! \param newData a template - the data that is entered
*/
	G setData(G newData)  //!< returns the data
	{
		data = newData;
	}

//! Function to set next node
/*! \param newNext a pointer - the elements new next pointer
*/
	void setNext(shared_ptr<listNode<G>> newNext)  //!< returns next node
	{
		next = newNext;
	}

//! Function to set previous node
/*! \param newPrev a pointer - the elements new previous pointer
*/
	void setPrev(shared_ptr<listNode<G>> newPrev)  //!< returns previous node
	{
		prev = newPrev;
	}
}; 