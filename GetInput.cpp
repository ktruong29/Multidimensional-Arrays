/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION GetInput
 * ----------------------------------------------------------------------------
 * 		This function receives a name of an input file and a two dimensional
 * 			string array to read in different type of fruits from the input file
 * 		==> returns nothing - read in different types of fruits from the
 * 							  input file
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			fileName: input file name to read in types of fruits
 *
 * POST-CONDITIONS
 * 		==> THE ARGUMENTS FOR FOLLOWING PARAMETERS WILL BE MODIFIED.
 * 			Input read in in the function will be stored here and returned via
 * 			the parameters.
 *				stringAr
 ******************************************************************************/

void GetInput(string fileName,				   			 // IN - input file name to read
											   											 //    - in types of fruits
						 	string stringAr[][TOTAL_FRUITS]) // IN - string array to read in
											   											 //    - types of fruits
{
	string   fruitName;		// IN 		 	 - fruit name reads in from input file
												//			 		 - and stores each fruit in a 2D array
	string   season;			// IN & CALC - season reads in from input file
	string   fruitType;		// IN & CALC - fruit type reads in from input file
	Seasons  seasonIndex;	// CALC      - season index to convert season to a
												//			 		 - variable of type Seasons
	Fruits	 fruitIndex;	// CALC 	   - fruit index to convert fruit to a
												//			 		 - variable of type Fruits
	ifstream fin;					// IN        - input file variable

	fin.open(fileName.c_str());

	while(fin)
	{
		getline(fin, fruitName);
		getline(fin, season);
		getline(fin, fruitType);
		fin.ignore(10000,'\n');

		seasonIndex = ConvertStringToSeasons(season);
		fruitIndex  = ConvertStringToFruits(fruitType);

		stringAr[seasonIndex][fruitIndex] = fruitName;
	}
	fin.close();
}
