/*!
\file shape.h
*/

/*! \class Shape
\brief Defines the bases for all shapes as well as the transformations.
*/

#pragma once
#include "SFML/Graphics.hpp"

class shape : public sf::Drawable, public sf::Transformable
{
protected:
	sf::VertexArray points; //!< Array coordinates of corners are stored in
	sf::Transform transform; //!< Stores the transformation
	sf::RenderStates states; //!< Allows the transformation to be called

	int x; //!< X coordinate used in transformation
	int y; //!< Y coordinate used in transformation

public:
	shape(int n); //!< Defines the array type and resize

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!< Draws the targeted array
	void rotate(float angle); //!< Allows the shape to be rotated
	void scale(float xScale, float yScale); //!< Allows the shape to be scaled
	void move(sf::Vector2f newPos); //!< Allows the shape to move
	
	sf::RenderStates getStates(); //!< Returns the state which stores the transformation
};
