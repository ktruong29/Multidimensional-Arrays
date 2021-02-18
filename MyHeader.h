/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

//preprocessor directives
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

/******************************************************************************
 * CONSTANTS
 * ----------------------------------------------------------------------------
 * USED FOR ARRAY SIZES
 * ----------------------------------------------------------------------------
 * TOTAL_SEASONS	: total seasons
 * TOTAL_FRUITS		: total fruits
 * ----------------------------------------------------------------------------
 * USED FOR FORMATING
 * ----------------------------------------------------------------------------
 * SEASON_COL		: season column
 * VARIETY_COL		: variety column
 * FRUIT_COL		: fruit column
 * ----------------------------------------------------------------------------
 * USED FOR C-STRING ARRAY
 * seasonAr			: season string array
 * fruitAr			: fruit string array
 ******************************************************************************/
const int TOTAL_SEASONS = 4;
const int TOTAL_FRUITS  = 6;

const int SEASON_COL    = 10;
const int VARIETY_COL   = 12;
const int FRUIT_COL     = 24;

const string seasonAr[TOTAL_SEASONS] = {"WINTER",
																				"SPRING",
																				"SUMMER",
																				"FALL"};

const string fruitAr[TOTAL_FRUITS]   = {"Grapefruit",
																				"Mandarin",
																				"Orange",
																				"Exotic",
																				"Apple",
																				"Avocado"};
// enums
enum Seasons
{
	WINTER,
	SPRING,
	SUMMER,
	FALL
};

enum Fruits
{
	GRAPEFRUIT,
	MANDARIN,
	ORANGE,
	EXOTIC,
	APPLE,
	AVOCADO
};


//prototypes
/******************************************************************************
 * PrintHeader
 * 	This function receives an assignment name, type and number then outputs the
 * 		appropriate header
 * 	==> returns nothing - This will output the class heading.
 ******************************************************************************/
void PrintHeader(string asName,  // IN - assignment Name � used for output
								 char   asType,  // IN - assignment type
								 	 	 	 	 				 //    - (LAB or ASSIGN) � used for output
								 int    asNum);  // IN � assign. number � used for output

/******************************************************************************
 * OutputFruitHeading
 * 	This function receives a name of an input file to read in the fruit heading
 * 		and output the fruit heading from a text file
 * 	==> returns nothing - This will output the fruit heading from a text file.
 ******************************************************************************/
void OutputFruitHeading(string fileName); // IN - file name to read input from
										  									  //	- an input file

/******************************************************************************
 * ConvertStringToSeasons
 * 	This function receives season string and converts season string to a
 * 		variable of type Seasons
 * 		==> returns the variable of type Seasons
 ******************************************************************************/
Seasons ConvertStringToSeasons(string seasonStr); // IN - season string to calc
												  												//    - variable of type Seasons

/******************************************************************************
 * ConvertStringToSeasons
 * 	This function receives fruit string and converts fruit string to a
 * 		variable of type Fruits
 * 		==> returns the variable of type Fruits
 ******************************************************************************/
Fruits  ConvertStringToFruits(string fruitStr); // IN - fruit string to calc
																								//    - variable of type Fruits

/******************************************************************************
 * GetInput
 * 	This function receives a name of an input file and a two dimensional string
 *		array to read in different type of fruits from the input file
 * 	==> returns nothing - read in different types of fruits from the input file
 ******************************************************************************/
void GetInput(string fileName,					// IN - input file name to read
																				//    - in types of fruits
						  string stringAr[][TOTAL_FRUITS]); // IN - string array to read in
																								//    - types of fruits

/******************************************************************************
* ValidateUserInput
* 	This function receives fruit prompt string and it will also validate user
* 		input. If the user input is invalid, it should output an error message
* 		and ask the user to input again.
* 	==> returns the user valid input character
*******************************************************************************/
char ValidateUserInput(const string FRUIT_PROMPT); // IN/OUT - fruit prompt

/******************************************************************************
* ConvertCharToSeasons
* 	This function receives a valid season character and converts it from season
* 		character to a variable of type Seasons
* 	==> returns the variable of type Seasons
*******************************************************************************/
Seasons ConvertCharToSeasons(char seasonChar); // IN - season character to calc
											   											//	   - a variable of type Seasons

/******************************************************************************
* ComputerRandomValue
* 	This function calculates the computer random value (0-5)
* 	==> returns the computer random value
*******************************************************************************/
int ComputerRandomValue();

/******************************************************************************
* OutputSeasonAndFruit
* 	This function receives a 2D fruit string array, variable of type Seasons,
* 		and a computer random value to output a random fruit based on the season
* 		from the user input
* 	==> returns nothing - This will output a random fruit based on the season
*******************************************************************************/
void OutputSeasonAndFruit(const string STRING_AR[][TOTAL_FRUITS],// IN - fruit
																																 //    - array to
																																 //    - output
																																 //    - fruit
												  Seasons      seasonVar,				 // IN - season
								  	  	  	  	  	  	  	  	  	  	 //    - variable
								  	  	  	  	  	  	  	  	  	  	 //    - to output
												 										 				 		//    - fruit
												  int          compRandVal);	 // IN - computer
																											 //    - value to
																											 //    - output
																	 										 //    - fruit

/******************************************************************************
* GetDisplayReference
* 	This function will prompt and ask user to choose one of the two output
* 		formats ('S' for season format and 'V' for variety format) when the user
* 		enters a character 'A' for a season character
* 	==> returns a format character
*******************************************************************************/
char GetDisplayPref();

/******************************************************************************
* OutputSeasonTable
* 	This function will output the table of season, variety, and fruit as follows
* 		SEASON    VARIETY     FRUIT
*		--------  ----------  -----------------------
* 	==> returns nothing - This will output the table of season, variety, and fruit
*******************************************************************************/
void OutputSeasonTable();

/******************************************************************************
* OutputSeasonFormat
* 	This function receives a 2D fruit string array to output the seasons, type
* 		of fruits, and 6 possible fruits for each season as follows
* 			WINTER    Grapefruit  Oroblanco Grapefruit
*       			  	Mandarin    Satsuma Mandarin
*         			  Orange      Moro Blood Orange
*
*       SPRING    Grapefruit  Star Ruby Red Grapefruit
*        			  	Mandarin    Honey Mandarin
*          			  Orange      Washington Navel Orange
* 	==> returns nothing - This will output the seasons, type of fruits, and
* 		6 possible fruits for each season
*******************************************************************************/
void OutputSeasonFormat(const string STRING_AR[][TOTAL_FRUITS]);// IN - fruit array
																																//    - to output
																																//    - seasons,
																																//    - 6 possible
																																//    - fruits

/******************************************************************************
* OutputVarietyTable
* 	This function will output the table of variety, season, and fruit as follows
* 		    VARIETY     SEASON		FRUIT
*			----------  --------	-----------------------
* 	==> returns nothing - This will output the table of variety, season, and fruit
*******************************************************************************/
void OutputVarietyTable();

/******************************************************************************
* OutputVarietyFormat
* 	This function receives a 2D fruit string array to output the seasons, type
* 		of fruits, and 6 possible fruits for each season as follows
* 			Grapefruit  WINTER    Oroblanco Grapefruit
*           				SPRING    Star Ruby Red Grapefruit
*            				SUMMER    Rio Red Grapefruit
*            				FALL      Marsh Grapefruit
*
*         	Mandarin    WINTER    Satsuma Mandarin
*           						SPRING    Honey Mandarin
*            						SUMMER    Gold Nugget Mandarin
*            						FALL      Kishu Minu Mandarin
* 	==> returns nothing - This will output the seasons, type of fruits, and
* 		6 possible fruits for each season
*******************************************************************************/
void OutputVarietyFormat(const string STRING_AR[][TOTAL_FRUITS]);// IN - fruit array
																																 //    - to output
																																 //    - seasons,
																																 //    - 6 possible
																																 //    - fruits

#endif /* MYHEADER_H_ */
