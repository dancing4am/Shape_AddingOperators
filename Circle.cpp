/*
*	PROJECT			:	OOP_A07_Shapes_AddingOperators_ChowonJung
*	FILE			:	Circle.cpp
*	NAME			:	Chowon Jung
*	FIRST VERSION	:	2019-03-12
*	DESCRIPTION		:	This file contains the methods of the Circle class that inherits from Shape class.
*/


/// /* Libraries */
#include "Circle.h"


/// /* Class Constant */
const float Circle::PIE = 3.1415926;


/// /* Constructor */
///
/// \brief Called upon to <i>construct</i> a circle object
/// \details <b>Details</b>
/// This constructor initializes one attribute as default.
/// \param name - <b>string</b> - representation of the Shape's name : Circle
/// This constructor receives two attributes for its instantiation.
/// \param newColour  - <b>string</b> - representation of the Circle's colour
/// \param newRadius - <b>float</b> - representation of the Circle's radius
/// 
/// \return As this is a <i>constructor</i> for the Circle class, nothing is returned
/// 
/// \see ~Circle()
Circle::Circle(string newColour, float newRadius) : Shape(CIRCLE, newColour)
{
	///Inherits Shape class as named Circle
	///Colour set in Shape class
	///Sanity check on newRadius and put when valid
	if (newRadius >= ZERO)
	{
		radius = newRadius;
	}
}

///
/// \brief Called upon to <i>construct</i> a circle object
/// \details <b>Details</b>
/// This constructor initializes three default values of the circle class.
/// \param name  - <b>string</b> - representation of the Shape's name : Circle
/// \param colour - <b>string</b> - representation of the Circle's colour : undefined
/// \param radius - <b>float</b> - representation of the Circle's radius : 0.0
/// 
/// \return As this is a <i>constructor</i> for the Circle class, nothing is returned
/// 
/// \see ~Circle()
Circle::Circle(void) :Shape(CIRCLE, colourList[UNDEFINED])
{
	///Inherits Shape class as named Circle
	///Colour set in Shape class
	radius = ZERO;
}


/// /* Destructor */
///
/// \brief Called upon to <i>destroy</i> a circle object - once it loses <b>scope</b>
///
/// \return As this is a <i>destructor</i> for the Circle class, nothing is returned
///
/// \see Circle()
///
Circle::~Circle(void)
{
	printf("The circle is broken ...\n");
}


/// /* Accessor */
///
/// \brief Called to load the value of the radius attribute and return it to the caller function.
///
/// \return Returns the circle's radius as a float
///
///
float Circle::GetRadius(void)
{
	return radius;
}


/// /* Mutator */
///
/// \brief Called to change the existing value of the radius attribute.
///
/// \return void
///
///
void Circle::SetRadius(float newRadius)
{
	if (newRadius >= ZERO)
	{
		radius = newRadius;
	}
}


/// /* Overloaded Addition Operator */
///
/// \brief Called upon to operate the <i>addition</i> of two circle objects.
///
/// \details <b>Details</b>
/// This operator assigns LHS's colour as and the sum of the two circle's radii as the result.
/// 
/// \return Returns the circle object contains the addition result
///
/// \see Circle()
///
Circle Circle::operator+(const Circle& op2)
{
	Circle	tmp;

	tmp.colour = colour;
	tmp.radius = radius + op2.radius;

	return tmp;
}

/// /* Overloaded Multiplication Operator */
///
/// \brief Called upon to operate the <i>multiplication</i> of two circle objects.
///
/// \details <b>Details</b>
/// This operator assigns RHS's colour as and the multiplication of the two circle's radii as the result.
/// 
/// \return Returns the circle object contains the multiplication result
///
/// \see Circle()
///
Circle Circle::operator*(const Circle& op2)
{
	Circle	tmp;
	tmp.colour = op2.colour;
	tmp.radius = radius * op2.radius;

	return tmp;
}

/// /* Overloaded Direct Assignment Operator */
///
/// \brief Called upon to operate the <i>direct assignment</i> between two circle objects.
///
/// \details <b>Details</b>
/// This operator assigns RHS's colour as the LHS' colour and
/// the radius of the RHS as the radius of the LHS.
///
/// \return Returns the pointer to the circle object contains the assignment result
///
/// \see Circle()
///
const Circle& Circle::operator=(const Circle& op2)
{
	if (this != &op2)
	{
		colour = op2.colour;
		radius = op2.radius;
	}
	return *this;
}

/// /* Overloaded Equal Comparison Operator */
///
/// \brief Called upon to operate the <i>equal comparison</i> of two circle objects.
///
/// \return Returns the bool value indicates if two objects have equal data member values.
///
/// \see Circle()
///
bool Circle::operator==(const Circle& op2)
{
	if ((colour == op2.colour) &&
		(radius == op2.radius))
	{
		return true;
	}
	else
	{
		return false;
	}
}


/// /* Methods */

///
/// \brief Called upon to <i>display</i> a circle object's all attributes.
///
/// \return void
///
/// \see Circle()
///
void Circle::Show(void)
{
	///prints out the shape's name, colour, radius, perimeter and area
	cout << "Shape Information" << endl;
	cout.setf(ios::left);
	cout << setw(14) << "Name";
	cout << ": " << GetName() << endl;
	cout << setw(14) << "Colour";
	cout << ": " << GetColour() << endl;
	cout << setw(14) << "Radius";
	cout << ": " << GetRadius() << " cm" << endl;
	cout << setw(14) << "Circumference";
	cout << ": " << Perimeter() << " cm" << endl;
	cout << setw(14) << "Area";
	cout << ": " << Area() << " square cm" << endl;
}

///
/// \brief Called upon to calculate the <i>circumference</i> of a circle object.
///
/// \return Returns the circle's circumference as a float
///
/// \see GetRadius()
///
float Circle::Perimeter(void)
{
	/// 2pieR
	return 2 * PIE*GetRadius();
}

///
/// \brief Called upon to calculate the <i>area</i> of a circle object.
///
/// \return Returns the circle's area as a float
///
/// \see GetRadius()
///
float Circle::Area(void)
{
	/// pieRpower (pie eqt 3.1415926)
	return PIE * (GetRadius()*GetRadius());
}

///
/// \brief Called upon to calculate the <i>overall dimension</i> of a circle object.
///
/// \return Returns the circle's overall dimension as a float
///
/// \see GetRadius()
///
float Circle::OverallDimension(void)
{
	/// return the value 2R
	return 2 * GetRadius();
}
