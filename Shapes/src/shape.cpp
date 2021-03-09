/*!
\file shape.cpp
*/

#include "shape.h"
#include "iostream"


//! Function to create array
/*! 
\param n an int - the number of points within the array.
*/
shape::shape(int n)
{
	points.setPrimitiveType(sf::LineStrip);
	points.resize(n);
}

//! Function to draw array
/*! 
\param target a sf::RenderTarget - tells it what to draw.
\param states a sf::RenderStates - allows the transformed points to be drawn
\return Void function so returns nothing.
*/
void shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(points, states);
}


//! Function to rotate shape
/*! 
\param angle a float - the desired angle to rotate by.
\return Void function so returns nothing.
*/
void shape::rotate(float angle)
{
	transform.rotate(angle, sf::Vector2f(x, y));
	states.transform = transform;
}


//! Function to scale shape
/*! 
\param xScale a float - the desired scale in the x axis.
\param yScale a float - the desired scale in the y axis.
\return Void function so returns nothing.
*/
void shape::scale(float xScale, float yScale)
{
	transform.scale(sf::Vector2f(xScale, yScale), sf::Vector2f(x, y));
	states.transform = transform;
}


//! Function to move shape
/*! 
\param newPos a sf::Vector2f - the desired new position of the shape
\return Void function so returns nothing.
*/
void shape::move(sf::Vector2f newPos)
{
	x = newPos.x;
	y = newPos.y;

}


//! Function to return the transformation
/*!
\return The desired transformation(s)
*/
sf::RenderStates shape::getStates()
{
	return states;
}