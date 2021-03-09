/*!
\file dot.h
*/

/*! \class Dot
\brief Inherits from shape and draws the dot specifically.
*/

#pragma once
#include "shape.h"
#include "SFML/Graphics.hpp"

class dot : public shape
{
public:
	dot(sf::Vector2f position); //!< Passes the coordinate into the array
};