/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * Multidimensional Arrays
 * ----------------------------------------------------------------------------
 * This program will allow user to input a season and output one of 6 possible
 * 		fruits for each season. Input should be read in from a file into a 2-
 * 		dimensional array. If the user selects a season, one of the fruits in
 * 		season for that month should be randomly selected and output. The user
 * 		should also have the option to output a table with all the fruits.
 * 		If they choose Display All, a submenu should display allowing the user
 * 		to choose between viewing the fruits by season or by variety
 * ----------------------------------------------------------------------------
 * INPUT :
 *			fruitArray    : fruit array read in fruits from input file
 *			inputFileName : input file name to read input into a 2D fruit array
 *
 * OUTPUT:
 * 			fruitArray    : fruit array output 6 possible fruits for each season
 *
 *****************************************************************************/

int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * FRUIT_HEADER : fruit header
	 * DISPLAY_ALL  : display all format
	 * EXIT_CHAR    : exit program character
	 * SEASON_FORMAT: season format
	 * ************************************************************************/
	const string FRUIT_MENU =   "********************\n"
															"   FRUIT SELECTOR\n"
															"********************\n"
															"(W) Winter\n"
															"(S) Spring\n"
															"(U) Summer\n"
															"(F) Fall\n"
															"(A) Display All\n"
															"(X) Exit\n";

	const char DISPLAY_ALL   	= 'A';
	const char EXIT_CHAR	 		= 'X';
	const char SEASON_FORMAT 	= 'S';

	string  fruitArray[TOTAL_SEASONS] // IN, CALC, & OUT - fruit array read in
					  				[TOTAL_FRUITS]; //				 				 - from input file and
																	  //                 - output 6 possible
																	  //				 				 - fruits for each season
	string  inputFileName;			  		// IN - input file name to
									  								//		- read input to a 2D array
	char    seasonCharM;			  			// CALC - valid season character
									  								//			- from user
	char    displayFormatChar;		  	// CALC - format character from
									  								//			- user input
	Seasons seasonRowIndex;			  		// CALC - season row index to
																	  //			- convert season char
																	  //			- to a variable of type
																	  //			- Seasons
	int     randomFruitCol;			  		// CALC	- computer random value
	srand(time(NULL));				  			// CALC	- set the seed based off
									  								//			- of the time

	//OUTPUT - Class heading to the console
	PrintHeader("Multidimensional Arrays", 'A', 11);

	/**************************************************************************
	 * OUTPUT - This will output the fruit heading
	 *************************************************************************/
	OutputFruitHeading("FruitHeading.txt");

	cout << endl;
	/**************************************************************************
	 * INPUT - This program will first receive an input file name
	 *************************************************************************/
	cout << "Please Select Fruit File: ";
	getline(cin, inputFileName);

	/**************************************************************************
	 * INPUT - This will read in different type of fruits from the input file
	 * 		   and store the names into a 2-dimensional fruit array
	 *************************************************************************/
	GetInput(inputFileName, fruitArray);

	cout << endl;
	/**************************************************************************
	 * INPUT - This will prompt user to enter the season character and validate
	 * 		   user input. When the user enters 'X', the program will exit; when
	 * 		   the user enters 'A', a submenu should display allowing the user
	 * 		   to choose between viewing the fruits by season or by variety
	 *************************************************************************/
	seasonCharM = ValidateUserInput(FRUIT_MENU);

	while(seasonCharM != EXIT_CHAR)
	{
		if(seasonCharM != DISPLAY_ALL)
		{
			/******************************************************************
			 * PROCESSING - This will convert season character to a variable
			 * 				of type Seasons
			 ******************************************************************/
			seasonRowIndex = ConvertCharToSeasons(seasonCharM);

			/******************************************************************
			 * PROCESSING - This will get the computer random value
			 ******************************************************************/
			randomFruitCol = ComputerRandomValue();

			cout << endl;

			/******************************************************************
			 * OUTPUT - This program will output a season, along with a random
			 * 			fruit selected within the season
			 ******************************************************************/
			OutputSeasonAndFruit(fruitArray, seasonRowIndex, randomFruitCol);
		}
		else
		{
			cout << endl;

			/******************************************************************
			 * INPUT - This will prompt user a submenu and ask for the format
			 * 		   character from user (S or V)
			 ******************************************************************/
			displayFormatChar = GetDisplayPref();

			if(displayFormatChar == SEASON_FORMAT)
			{
				cout << endl;

				/**************************************************************
				 * OUTPUT - This program will output a table of season as below
				 * 		SEASON    VARIETY     FRUIT
				 *		--------  ----------  -----------------------
				 **************************************************************/
				OutputSeasonTable();

				/**************************************************************
				 * OUTPUT - This program will output a table of all the seasons
				 * 			and fruits when user enters 'S'
				 **************************************************************/
				// HEADING
				OutputSeasonFormat(fruitArray);
			}
			else
			{
				cout << endl;

				/**************************************************************
				 * OUTPUT - This program will output a table of variety as below
				 * 		 VARIETY     SEASON		FRUIT
				 *		 ----------  --------	-----------------------
				 **************************************************************/
				// HEADING
				OutputVarietyTable();

				/**************************************************************
				 * OUTPUT - This program will output a table of all the seasons
				 * 			and fruits when user enters 'V'
				 **************************************************************/
				OutputVarietyFormat(fruitArray);
			}
		}

		//CHANGE LCV
		seasonCharM = ValidateUserInput(FRUIT_MENU);
	}

	cout << endl;
	cout << "Thank you for using the fruit selector program!\n";

	return 0;
}
