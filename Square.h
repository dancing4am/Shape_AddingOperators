/*
*	PROJECT			:	OOP_A07_Shapes_AddingOperators_ChowonJung
*	FILE			:	Square.h
*	NAME			:	Chowon Jung
*	FIRST VERSION	:	2019-03-12
*	DESCRIPTION		:	This file is the header file for the Square class that inherits from Shape class.
*/


///  
/// <b>Class constants</b>
/// - const string CIRCLE: Circle
/// - const string SQUARE: Square
/// - const string UNKNOWN: Unknown
/// - const string colourList[NUM_COLOURS]: undefined, red, green, blue, yellow, purple, pink, orange.
///
/// <b>Class data members</b>
/// - string name   : name of the shape (circle / square / unknown)
/// - string colour : colour of the shape (red, green, blue, yellow, purple, pink, orange, undefined)
///
/// <b>Class constructors</b>
/// - constructor receives attributes name, colour
/// - default constructor
///
/// <b>Class Destructor</b>
/// - destructor prints "The shape is destroyed ..."
///
/// <b>Methods</b>
///
/// <i>Perimeter()</i>
/// This method is a pure virtual method for its children methods that will be used to calculate its perimeter.
///
/// <i>Area()</i>
/// This method is a pure virtual method for its children methods that will be used to calculate its area.
///
/// <i>OverallDimension()</i>
/// This method is a pure virtual method for its children methods that will be used to calculate its overall dimension.
///
///
///
/// \author <i>Chowon Jung</i>
///


///
/// \class Square
///
/// \brief The purpose of this class is to set and simulate information of a square.
///
/// \details <b>Details</b>
/// This class inherits from <i>Shape</i> class.
/// At the instantiation of a <i>Square</i> object,
/// the <i>name</i> data member in <i>Shape</i> class is set as "Square".
/// Another data member <i>colour</i> inherits from <i>Shape</i> class and
/// the private data member of <i>Square</i> object, <i>sideLength</i> can be modified.
/// This class includes :
/// - an additional data member (<i>sideLength</i>)
/// - two constructors
/// - a virtual destructor
/// - a accessor (<i>sideLength</i>)
/// - a mutator (<i>sideLength</i>)
/// - four overloaded operators (+, *, =, ==)
/// - a additional method
/// - three virtual methods 
/// as an expansion of what it has inherted from <i>Shape</i> class.
/// 
///
/// <b>Class constants</b>
/// None
///
/// <b>Class data members</b>
/// - float sideLength   : side lenght of the square
///
/// <b>Methods</b>
///
/// <i>Perimeter()</i>
/// This method calculates perimeter of the square
///
/// <i>Area()</i>
/// This method calculates area of the square
///
/// <i>OverallDimension()</i>
/// This method calculates overall dimension of the square
///
///
///
/// \author <i>Chowon Jung</i>
///


/// /* Load Once */
#ifndef SQUARE_H
#define SQUARE_H


/// /* Pragma */
#pragma once


/// /* Libraries */
#include "Shape.h"


/// /* Class Square */
class Square : public Shape
{
private:
	float sideLength;						///side-length value in centimeters 0+

public:
	/// /* Constructor */
	Square(string colour, float sideLength);///Constructor of square class receives colour, sideLength
	Square(void);							///Default constructor of square class

	/// /* Destructor */
	virtual ~Square(void);					///destructor prints "The square is squished ..."

	/// /* Accessor */
	float GetSideLength(void);				///getter of a square object's side length

	/// /* Mutator */
	void SetSideLength(float newSideLength);///setter of a square object's side length

	/// /* Overloaded Operators */
	Square operator+(const Square& op2);				/// operates addition between two square objects
	Square Square::operator*(const Square& op2);		/// operates multiplication between two square objects
	const Square& Square::operator=(const Square& op2);	/// operates direct assignment between two square objects
	bool Square::operator==(const Square& op2);			/// operates equal comparison between two square objects

	/// /* Methods */
	void Show(void);						///Displays all attributes of a square object
	virtual float Perimeter(void);			///4s
	virtual float Area(void);				///spower
	virtual float OverallDimension(void);	///return s
};

#endif // !SQUARE_H
