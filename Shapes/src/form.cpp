/*!
\file form.cpp
*/

#include "form.h"
#include <cmath>
#include <iostream>

#define PI 3.14159265


//! Function to calculate the coordinates of all points and pass them into the array, resizing it accordingly
/*!
\param centre a sf::Vector2f - the centre coordinate of the shape.
\param radX an int - the radius of the shape in the x axis.
\param radY an int - the radius of the shape in the y axis.
\param thetaS an int - the starting angle of the shape.
\param thetaE an int - the end angle of the shape.
\param nPoints an int - the number of corners the shape should have.
*/
form::form(sf::Vector2f centre, int radX, int radY, int thetaS, int thetaE, /*int increment,*/ int nPoints) : shape(nPoints + 1)
{
	x = centre.x;
	y = centre.y;


	theta = thetaS;
	increment = thetaE / nPoints;


	for (int i = 0; i < nPoints; i++)
	{
		points[i] = sf::Vector2f((x + ((cos((theta*PI)/180))*radX)), (y + ((sin((theta*PI)/180)*radY))));		//calculate the x and y coordinates for the circumfrance and passes them into the array

		theta += increment;

		points[i].color = sf::Color(5 + 20* i, 50 + 50*i, 200 - 10*i, 255);		//sets the colour of each point
	}	


	if (thetaE == 360)
		points[nPoints] = points[0];	//assigns the last point to be the same as the first if the ending angle is 360
	else
		points[nPoints] = points[nPoints - 1];		//if the ending angle isn't 360 assigns the last point to be the same as the one before it
}
