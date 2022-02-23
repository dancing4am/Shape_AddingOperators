/*
*	PROJECT			:	OOP_A07_Shapes_AddingOperators_ChowonJung
*	FILE			:	Shape.cpp
*	NAME			:	Chowon Jung
*	FIRST VERSION	:	2019-03-12
*	DESCRIPTION		:	This file contains the methods of Shape class.
*/


/// /* Libraries */
#include "Shape.h"


/// /* Class Constants */
const string Shape::CIRCLE = "Circle";
const string Shape::SQUARE = "Square";
const string Shape::UNKNOWN = "Unknown";
const string Shape::colourList[NUM_COLOURS] =
{ "undefined", "red", "green", "blue", "yellow", "purple", "pink", "orange" };


/// /* Constructors */
///
/// \brief Called upon to <i>construct</i> a shape object
/// \details <b>Details</b>
/// This constructor receives two attributes for its instantiation.
/// \param newName  - <b>string</b> - representation of the Shape's type
/// \param newColour - <b>string</b> - representation of the Shape's colour
/// 
/// \return As this is a <i>constructor</i> for the Shape class, nothing is returned
Shape::Shape(string newName, string newColour)
{
	int colourSeeker = 0;
	/// Sanity check on name
	if (newName.length() <= MAX_NAME)
	{
		if (newName == CIRCLE)
		{
			name = CIRCLE;
		}
		else if (newName == SQUARE)
		{
			name = SQUARE;
		}
		else if (newName == UNKNOWN)
		{
			name = UNKNOWN;
		}
	}
	/// Sanity check on colour
	if (newColour.length() <= MAX_COLOUR)
	{
		while ((newColour != colourList[colourSeeker]) &&
			(colourSeeker < NUM_COLOURS))
		{
			colourSeeker++;
		}
		if (colourSeeker < NUM_COLOURS)
		{
			colour = colourList[colourSeeker];
		}
	}
}

///
/// \brief the default <i>constructor</i> of shape class
/// \details <b>Details</b>
/// This constructor initializes two attributes for its instantiation.
/// \param newName  - <b>string</b> - representation of the Shape's type : Unknown
/// \param newColour - <b>string</b> - representation of the Shape's colour : undefined
/// 
/// \return As this is a <i>constructor</i> for the Shape class, nothing is returned
Shape::Shape(void)
{
	name = UNKNOWN;
	colour = colourList[UNDEFINED];
}


/// /* Destructor */
///
/// \brief Called upon to <i>destroy</i> a shape object - once it loses <b>scope</b>
///
/// \return As this is a <i>destructor</i> for the Shape class, nothing is returned
///
/// \see Shape()
///
Shape::~Shape(void)
{
	printf("The shape is destroyed ...\n");
}


/// /* Accessors */
///
/// \brief Called to load the data of the name attribute and return it to the caller function.
///
/// \return Returns the shape's name as a string
///
///
string Shape::GetName(void)
{
	return name;
}

///
/// \brief Called to load the data of the colour attribute and return it to the caller function.
///
/// \return Returns the shape's colour as a string
///
///
string Shape::GetColour(void)
{
	return colour;
}


/// /* Mutators */
///
/// \brief Called to change the existing data of the name attribute.
///
/// \return void
///
///
void Shape::SetName(string newName)
{
	///Sanity check on name and put
	if (newName.length() <= MAX_NAME)
	{
		if (newName == CIRCLE)
		{
			name = CIRCLE;
		}
		else if (newName == SQUARE)
		{
			name = SQUARE;
		}
		else if (newName == UNKNOWN)
		{
			name = UNKNOWN;
		}
	}
}

///
/// \brief Called to change the existing data of the colour attribute.
///
/// \return void
///
///
void Shape::SetColour(string newColour)
{
	int colourSeeker = 0;
	///Sanity check on colour and put
	if (newColour.length() <= MAX_COLOUR)
	{
		while ((newColour != colourList[colourSeeker]) &&
			(colourSeeker < NUM_COLOURS))
		{
			colourSeeker++;
		}
		if (colourSeeker < NUM_COLOURS)
		{
			colour = colourList[colourSeeker];
		}
	}
}