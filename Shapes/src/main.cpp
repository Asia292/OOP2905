/*! \mainpage Lab Book 1 - Shapes
*
* This program creates and draws a set of shapes from scratch
*
* The shapes are split into a number of classes to make creating them easier
*
* Transformations are also applied to the shapes
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application
* 
* Defines the paramaters for all the shapes and the transformations
*
* Creates the SFML window and draws the shapes to it
*/

#include "SFML/Graphics.hpp"
#include "dot.h"
#include "line.h"
#include "form.h"

int n = 0;

int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	//// passes the values into the corresponding classes allowing the shapes to be created ////
	dot Dot(sf::Vector2f(50.0, 50.0));
	
	line Line(sf::Vector2f(100.0, 100.0), sf::Vector2f(100.0, 200.0));

	form Triangle(sf::Vector2f(500.0, 300.0), 100, 100, 0, 360, 3);

	form Square(sf::Vector2f (300.0, 300.0), 100, 100, 45, 360, 4);

	form Rectangle(sf::Vector2f(800.0, 300.0), 100, 50, 45, 360, 4);

	form Circle(sf::Vector2f(300.0, 500.0), 100, 100, 0, 360, 30);

	form Arc(sf::Vector2f(550.0, 500.0), 100, 100, 45, 120, 30);

	form Elipse(sf::Vector2f(800.0, 500.0), 100, 50, 0, 360, 30);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		Rectangle.rotate(1);	//rotates the rectangle 1 degree at a time


		if (n < 10)		//if n < 10 then it decreases the scale of the circle
		{
			Circle.scale(0.5, 0.5);
			n++;
		}
		if (n > 10 && n < 20)	//if n > 10 and n < 20 it increases the scale of the circle
		{
			Circle.scale(2, 2);
			n++;

			if (n == 20)
				n = 0;		//sets n back to 0 when it reaches 20 to start the cycle over again
		}

		Triangle.move(sf::Vector2f(600.0, 100.0));		//moves the lines starting position to this coordinate

		
		window.clear();

		//// draws all the shapes ////
		window.draw(Dot);
		window.draw(Line);
		
		window.draw(Square);
		window.draw(Triangle);
		window.draw(Rectangle, Rectangle.getStates());
		window.draw(Circle, Circle.getStates());
		window.draw(Arc);
		window.draw(Elipse);
		
		window.display();


	}
}