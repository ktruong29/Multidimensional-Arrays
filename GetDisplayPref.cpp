/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION GetDisplayReference
 * ----------------------------------------------------------------------------
 * 		This function will prompt and ask user to choose one of the two output
 * 			formats ('S' for season format and 'V' for variety format) when the
 * 			user enters a character 'A' for a season character
 * 		==> returns a format character
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		This function does not need a defined value passed in
 *
 * POST-CONDITIONS
 * 		==> returns a format character
 ******************************************************************************/
char GetDisplayPref()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * FORMAT_HEADER : display format
	 **************************************************************************/
	const string FORMAT_HEADER = "(S) Season\n"
						  	  						 "(V) Variety\n"
						  	  						 "Choose display format: ";
	char         formatChar;	// CALC - format character to calc the display
														//			- char format
	bool		 		 invalidChar; // CALC - invalid format character

	do
	{
		cout << FORMAT_HEADER;
		cin.get(formatChar);
		cin.ignore(10000,'\n');
		formatChar = toupper(formatChar);

		invalidChar = (formatChar != 'S' && formatChar != 'V');

		if(invalidChar)
		{
			cout << "\n*** INVALID INPUT - Please input a S or V ***\n\n";
		}

	}while(invalidChar);

	return formatChar;
}
