/*!
\file line.cpp
*/

#include "line.h"


//! Function to pass coordinates into array and resize it accordingly
/*!
\param start a sf::Vector2f - the start position of the line.
\param end a sf::Vector2f - the end position of the line.
*/
line::line(sf::Vector2f start, sf::Vector2f end) : shape(2)
{
	////assigns the points to positions within the array and sets their colour ////
	points[0] = start;
	points[0].color = sf::Color::Red;
	points[1] = end;

}