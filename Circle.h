/*
*	PROJECT			:	OOP_A07_Shapes_AddingOperators_ChowonJung
*	FILE			:	Circle.h
*	NAME			:	Chowon Jung
*	FIRST VERSION	:	2019-03-12
*	DESCRIPTION		:	This file is the header file for the Circle class that inherits from Shape class.
*/


/// 
/// \class Circle
///
/// \brief The purpose of this class is to set and simulate information of a circle.
///
/// \details <b>Details</b>
/// This class inherits from <i>Shape</i> class.
/// At the instantiation of a <i>Circle</i> object,
/// the <i>name</i> data member in <i>Shape</i> class is set as "Circle".
/// Another data member <i>colour</i> inherits from <i>Shape</i> class and
/// the private data member of <i>Circle</i> object, <i>radius</i> can be modified.
/// This class includes :
/// - a class static constant for <i>PIE</i>,
/// - an additional data member (<i>radius</i>)
/// - two constructors
/// - a virtual destructor
/// - a accessor (<i>radius</i>)
/// - a mutator (<i>radius</i>)
/// - four overloaded operators (+, *, =, ==)
/// - four virtual methods 
/// as an expansion of what it has inherted from <i>Shape</i> class.
/// 
/// 
/// \see Shape.h
/// 
///
/// <b>Class constants</b>
/// - static const float PIE: 3.1415926
///
/// <b>Class data members</b>
/// - float radius: radius of the circle
///
/// <b>Class constructors</b>
/// - constructor receives data for attributes colour, radius
/// - default constructor
///
/// <b>Class Destructor</b>
/// - destructor prints "The circle is broken ..."
///
/// <b>Overloaded Operators</b>
/// - overloaded + operator operates addition between two circle objects
/// - overloaded * operator operates multiplication between two circle objects
/// - overloaded = operator operates direct assignment between two circle objects
/// - overloaded == operator operates equal comparison between two circle objects
/// 
/// <b>Methods</b>
///
/// <i>Show()</i>
/// This method prints out the shape's name, colour, radius, perimeter and area
///
/// <i>Perimeter()</i>
/// This method calculates circumference of the circle
///
/// <i>Area()</i>
/// This method calculates area of the circle
///
/// <i>OverallDimension()</i>
/// This method calculates overall dimension of the circle
///
///
///
/// \author <i>Chowon Jung</i>
///


/// /* Load Once */
#ifndef CIRCLE_H
#define CIRCLE_H


/// /* Pragma */
#pragma once


/// /* Libraries */
#include "Shape.h"


/// /* Class Circle */
class Circle : public Shape
{
private:
	float radius;								/// centimeters range of 0+

public:
	/// /* Class Constants */
	static const float PIE;						/// pie value of 3.1415926

	/// /* Constructor */
	Circle(string newColour, float newRadius);	/// constructor receives data for attributes colour, radius
	Circle(void);								/// default constructor

	/// /* Destructor */
	virtual ~Circle(void);						/// destructor prints "The circle is broken ..."

	/// /* Accessor */
	float GetRadius(void);						/// getter for the attribute radius of a circle object

	/// /* Mutator */
	void SetRadius(float newRadius);			/// setter for the attribute radius of a circle object

	/// /* Overloaded Operators */
	Circle operator+(const Circle& op2);				/// operates addition between two circle objects
	Circle Circle::operator*(const Circle& op2);		/// operates multiplication between two circle objects
	const Circle& Circle::operator=(const Circle& op2);	/// operates direct assignment between two circle objects
	bool Circle::operator==(const Circle& op2);			/// operates equal comparison between two circle objects

	/// /* Methods */
	virtual void Show(void);					/// prints out the shape's name, colour, radius, perimeter and area
	virtual float Perimeter(void);				/// 2pieR
	virtual float Area(void);					/// pieRpower (pie eqt 3.1415926)
	virtual float OverallDimension(void);		/// return the value 2R
};

#endif // !CIRCLE_H
