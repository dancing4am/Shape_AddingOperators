/*
*	PROJECT			:	OOP_A07_Shapes_AddingOperators_ChowonJung
*	FILE			:	myShape.cpp
*	NAME			:	Chowon Jung
*	FIRST VERSION	:	2019-04-06
*	DESCRIPTION		:	The functions in this file are used to test the inheritance between an abstract class named Shape
*					:	and its child classes, Circle and Square.
*/

/// \mainpage Adding Operators Project   
///
/// \section intro Program Introduction
/// The <b>myShape</b> application is meant to test and simulate an example of <i>Overloading Operators</i>.
/// Also, this assignment uses <i>DOxygen commenting style</i>. 
///
/// <hr>
/// \section version Current version of the Adding Operator Project :
/// <ul>
/// <li>\authors   <b><i>Chowon Jung</i></b>
/// <li>\version   1.00.00</li>
/// <li>\date      2019-04-06</li>
/// <li>\copyright Chowon Jung</li>
/// </ul>
///


/// /* Libraries */
#include "Shape.h"
#include "Circle.h"
#include "Square.h"


/// <b>Main function</b>
/// 
/// This main function first instantiates 3 Circle objects and 3 Square objects.
/// Each two objects of each class are added and multiplied in order to simulate
/// overloaded operators for these classes. Each one objects of each classes are
/// used to store the result of the operations. 
/// Once the objects are all instantiated, it prints all the status of the objects out.
/// Then two overloaded additions for each Circle, Square classes are proceed,
/// and the result are printed as well, followed by the same process for the overloaded multiplications. 
/// At last, overloaded direct assignment is proceed and verified by the overloaded == operator,
/// and the program prints the result of the verification.
/// 
/// 
/// \author <i>Chowon Jung</i>
///
///
void main(void)
{
	/// instantiate all objects: 3 Circle objects, 3 Square objects
	Circle round1("red", 5.5);
	Circle round2("blue", 10.5);
	Circle playARound;
	Square square1("orange", 5);
	Square square2("purple", 12);
	Square playASquare;

	/// print out current status of every instantiated object
	round1.Show();
	round2.Show();
	playARound.Show();
	square1.Show();
	square2.Show();
	playASquare.Show();

	/// perform overloaded addition for Circle objects
	playARound = round1 + round2;
	/// perform overloaded addition for Square objects
	playASquare = square2 + square1;
	/// print out the operation results
	playARound.Show();
	playASquare.Show();

	/// perform overloaded multiplication for Circle objects
	playARound = round1 * round2;
	/// perform overloaded multiplication for Square objects
	playASquare = square2 * square1;
	/// print out the operation results
	playARound.Show();
	playASquare.Show();

	/// perform overloaded direct assignment
	playARound = round1;
	/// perform overloaded equal comparison
	if (playARound == round1)
	{
		/// print "Hurray !!" when succeeded
		printf("Hurray !!\n");
	}
	else
	{
		/// print "Awww !!" when failed
		printf("Awww !!\n");
	}
}