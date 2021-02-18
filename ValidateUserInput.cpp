/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION ValidateUserInput
 * ----------------------------------------------------------------------------
 * 		This function receives fruit prompt string and it will also validate
 * 			user input. If the user input is invalid, it should output an error
 * 			message and ask the user to input again.
 * 		==> returns the user valid input character
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			FRUIT_PROMPT: fruit prompt
 *
 * POST-CONDITIONS
 * 		==> returns the user valid input character
 ******************************************************************************/
char ValidateUserInput(const string FRUIT_PROMPT) // IN/OUT - fruit prompt
{
	char seasonChar;	// CALC - season character from user input
	bool invalidChar;	// CALC - invalid user character input

	cout << endl;
	do
	{
		cout << FRUIT_PROMPT << endl;

		cout << "What season is it? ";
		cin.get(seasonChar);
		cin.ignore(10000,'\n');
		seasonChar = toupper(seasonChar);

		invalidChar = (seasonChar != 'W' &&
								   seasonChar != 'S' &&
								   seasonChar != 'U' &&
								   seasonChar != 'F' &&
								   seasonChar != 'A' &&
								   seasonChar != 'X');

		if(invalidChar)
		{
			cout << "\n*** INVALID INPUT - "
			"Please input a W, S, U, F, A, or X ***\n\n\n";
		}
	}while(invalidChar);

	return seasonChar;
}
