/*!
\file form.h
*/

/*! \class Form
\brief Inherits from shape and can draw all other shapes.
*/

#pragma once
#include "shape.h"
#include "SFML/Graphics.hpp"


class form : public shape 
{
protected:
	int theta; //!< Used in coordinate equation
	int increment; //!< Stores the value of which to increment theta by

public:
	form(sf::Vector2f centre, int radX, int radY, int thetaS, int thetaE, int nPoints); //!< Calculates the coordinates of all points and passes them into the array

};