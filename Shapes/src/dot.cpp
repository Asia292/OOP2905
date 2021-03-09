/*!
\file dot.cpp
*/

#include "dot.h"


//! Function to pass coordinate into array and resize it accordingly
/*!
\param postion a sf::Vector2f - the position of the dot.
*/
dot::dot(sf::Vector2f position) : shape(1)
{
	points.setPrimitiveType(sf::Points);	//changes the array type to that of points instead of a line strip

	////assigns the point to a position within the array and sets its colour ////
	points[0] = position;
	points[0].color = sf::Color::Yellow;


}