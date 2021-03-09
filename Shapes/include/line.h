/*!
\file line.h
*/

/*! \class Line
\brief Inherits from shape and draws the line specifically.
*/

#pragma once
#include "shape.h"
#include "SFML/Graphics.hpp"


class line : public shape
{
public:
	line(sf::Vector2f start, sf::Vector2f end); //!< Passes the coordinates into the array
};