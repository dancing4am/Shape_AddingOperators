/*
*	PROJECT			:	OOP_A07_Shapes_AddingOperators_ChowonJung
*	FILE			:	Square.cpp
*	NAME			:	Chowon Jung
*	FIRST VERSION	:	2019-03-12
*	DESCRIPTION		:	This file contains the methods of the Square class that inherits from Shape class.
*/


/// /* Libraries */
#include "Square.h"


/// /* Constructor */
///
/// \brief Called upon to <i>construct</i> a square object
/// \details <b>Details</b>
/// This constructor initializes one attribute.
/// \param name - <b>string</b> - representation of the Shape's name
/// This constructor receives two attributes for its initialization.
/// \param newColour  - <b>string</b> - representation of the Square's colour
/// \param newSideLength - <b>float</b> - representation of the Square's side length
/// 
/// \return As this is a <i>constructor</i> for the Shape class, nothing is returned
/// 
///\see ~Square()
Square::Square(string newColour, float newSideLength) :Shape(SQUARE, newColour)
{
	///Sanity check on side-length
	if (newSideLength >= ZERO)
	{
		sideLength = newSideLength;
	}
}

///
/// \brief Called upon to <i>construct</i> a square object
/// \details <b>Details</b>
/// This constructor initializes three default values for its instantiation.
/// \param name - <b>string</b> - representation of the Shape's name : Square
/// \param newColour  - <b>string</b> - representation of the Circle's colour : undefined
/// \param sideLength - <b>float</b> - representation of the Circle's radius : 0.0
/// 
/// \return As this is a <i>constructor</i> for the Square class, nothing is returned
/// 
/// \see ~Square()
Square::Square(void) : Shape(SQUARE, colourList[UNDEFINED])
{
	sideLength = ZERO;
}


/// /* Destructor */
///
/// \brief Called upon to <i>destroy</i> a square object - once it loses <b>scope</b>
///
/// \return As this is a <i>destructor</i> for the Square class, nothing is returned
///
/// \see Square()
///
Square::~Square(void)
{
	printf("The square is squished ...\n");
}


/// /* Accessor */
///
/// \brief Called to load the value of the sideLength attribute and return it to the caller function.
///
/// \return Returns the square's side length as a float
///
///
float Square::GetSideLength(void)
{
	return sideLength;
}


/// /* Mutator */
///
/// \brief Called to change the existing value of the sideLength attribute.
///
/// \return void
///
///
void Square::SetSideLength(float newSideLength)
{
	if (newSideLength >= ZERO)
	{
		sideLength = newSideLength;
	}
}


/// /* Overloaded Addition Operator */
///
/// \brief Called upon to operate the <i>addition</i> of two square objects.
///
/// \return Returns the square object contains addition result
///
/// \see Square()
///
Square Square::operator+(const Square& op2)
{
	Square	tmp;

	tmp.colour = colour;
	tmp.sideLength = sideLength + op2.sideLength;

	return tmp;
}

/// /* Overloaded Multiplication Operator */
///
/// \brief Called upon to operate the <i>multiplication</i> of two square objects.
///
/// \return Returns the square object contains multiplication result
///
/// \see Square()
///
Square Square::operator*(const Square& op2)
{
	Square	tmp;
	tmp.colour = op2.colour;
	tmp.sideLength = sideLength * op2.sideLength;

	return tmp;
}

/// /* Overloaded Direct Assignment Operator */
///
/// \brief Called upon to operate the <i>direct assignment</i> between two square objects.
///
/// \return Returns the pointer to the square object contains assignment result
///
/// \see Square()
///
const Square& Square::operator=(const Square& op2)
{
	if (this != &op2)
	{
		colour = op2.colour;
		sideLength = op2.sideLength;
	}
	return *this;
}

/// /* Overloaded Equal Comparison Operator */
///
/// \brief Called upon to operate the <i>equal comparison</i> of two square objects.
///
/// \return Returns the bool value indicates the comparison result
///
/// \see Square()
///
bool Square::operator==(const Square& op2)
{
	if ((colour == op2.colour) &&
		(sideLength == op2.sideLength))
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
/// \brief Called upon to <i>display</i> a square object's all attributes.
///
/// \return void
///
/// \see Square()
///
void Square::Show(void)
{
	cout << "Shape Information" << endl;
	cout.setf(ios::left);
	cout << setw(14) << "Name";
	cout << ": " << GetName() << endl;
	cout << setw(14) << "Colour";
	cout << ": " << GetColour() << endl;
	cout << setw(14) << "Side-Length";
	cout << ": " << GetSideLength() << " cm" << endl;
	cout << setw(14) << "Perimeter";
	cout << ": " << Perimeter() << " cm" << endl;
	cout << setw(14) << "Area";
	cout << ": " << Area() << " square cm" << endl;
}

///
/// \brief Called upon to calculate the <i>perimeter</i> of a square object.
///
/// \return Returns the square's perimeter as a float
///
/// \see GetSideLength()
///
float Square::Perimeter(void)
{
	///4s
	return 4 * GetSideLength();
}

///
/// \brief Called upon to calculate the <i>area</i> of a square object.
///
/// \return Returns the square's area as a float
///
/// \see GetSideLength()
///
float Square::Area(void)
{
	///spower
	return GetSideLength()*GetSideLength();
}

///
/// \brief Called upon to calculate the <i>overall dimension</i> of a square object.
///
/// \return Returns the square's overall dimension as a float
///
/// \see GetSideLength()
///
float Square::OverallDimension(void)
{
	///return s
	return GetSideLength();
}