/*
*	PROJECT			:	OOP_A07_Shapes_AddingOperators_ChowonJung
*	FILE			:	Shape.h
*	NAME			:	Chowon Jung
*	FIRST VERSION	:	2019-03-12
*	DESCRIPTION		:	This file is the header file for Shape class which is abstract class.
*/


/// 
/// \class Shape
///
/// \brief The purpose of this class is to set and simulate information of a shape to be inherited.
///
/// \details <b>Details</b>
/// This class does not inherit from any class.
/// At the instantiation of a <i>Shape</i> object,
/// the <i>name</i> data member in <i>Shape</i> class is set one of the three types: <i>Circle</i>, <i>Square</i>, <i>Unknown</i>.
/// Another data member <i>colour</i> can be set and modified by this class as well as the child classes.
/// This class includes :
/// - four class static constant for
/// - two additional data members
/// - two constructors
/// - a virtual destructor
/// - two accessors
/// - two mutators
/// - four pure virtual methods 
/// This class can be inherited by <i>Circle</i> class and <i>Square</i> class.
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


/// /* Load Once */
#ifndef SHAPE_H
#define SHAPE_H


/// /* Pragma */
#pragma once


/// /* Libraries */
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <new>
using namespace std;


/// /* Constants */
#define MAX_NAME	50		/// maximum length of name attribute of shape class
#define MAX_COLOUR	10		/// maximum length of colour attribute of shape class
#define NUM_COLOURS 8		/// maxinum number of colour attribute of shape class
#define ZERO		0.00	/// mininum value of attributes : radius of circle, side length of square
#define UNDEFINED	0		/// constant used for better readability: indicates "undefined" element of colour list of shape class


/// /* Class Shape */
class Shape
{
private:
	string name;			/// maximum value of 50. Allowed names: "Circle", "Square", "Unknown"
	
public:
	string colour;			/// maxinum value of 10. Allowed colours: "red", "green", "blue", "yellow", "purple", "pink", "orange", "undefined"

	/// /* Class Constants */
	static const string CIRCLE;						/// a possible name for a shape object
	static const string SQUARE;						/// a possible name for a shape object
	static const string UNKNOWN;					/// a possible name for a shape object
	static const string colourList[NUM_COLOURS];	/// list of possible colours for shape object

	/// /* Constructors */
	Shape(string newName, string newColour);		/// constructor receives attributes name, colour
	Shape(void);									/// default constructor for shape class

	/// /* Destructor */
	virtual ~Shape(void);							/// virtual destructor 

	/// /* Accessors */
	string GetName(void);							/// getter for the attribute name of shape object
	string GetColour(void);							/// getter for the attribute colour of shape object

	/// /* Mutators */
	void SetName(string newName);					/// setter for the attribute name of shape object
	void SetColour(string newColour);				/// setter for the attribute colour of shape object

	/// /* Methods */
	virtual void Show(void) = 0;
	virtual float Perimeter(void) = 0;				/// pure virtual method to calculate perimeter of a shape
	virtual float Area(void) = 0;					/// pure virtual method to calculate area of a shape
	virtual float OverallDimension(void) = 0;		/// pure virtual method to return the overall dimension of a shape
};

#endif // !SHAPE_H
