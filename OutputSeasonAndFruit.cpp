/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION OutputSeasonAndFruit
 * ----------------------------------------------------------------------------
 * 		This function receives a 2D fruit string array, variable of type Seasons,
 * 			and a computer random value to output a random fruit based on the
 * 			season from the user input
 * 		==> returns nothing - This will output a random fruit based on season
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			FRUIT_AR    : fruit array to output fruit and season
 * 			seasonVar   : season variable to output fruit and season
 * 			compRandVal : computer randon value to output fruit and season
 *
 * POST-CONDITIONS
 * 		==> returns nothing - This will output a random fruit based on season
 ******************************************************************************/
void OutputSeasonAndFruit(const string STRING_AR[][TOTAL_FRUITS],// IN - fruit
																		 	 	 	 	 	 	 	 	 	 	 	 	 	 	 //    - array to
																		 	 	 	 	 	 	 	 	 	 	 	 	 	 	 //    - output
																		 	 	 	 	 	 	 	 	 	 	 	 	 	 	 //    - fruit
												  Seasons      seasonVar,				 				 // IN - season
							  	  	  	  	  	  	  	 	 	 	 	 	 	 	 	 			 //    - variable
												  	  	  	  	  	  	  	  	  	  	 //    - to output
													 	 	 	 	 	 	 	 	 	 										 //    - fruit
												  int          compRandVal)				 // IN - computer
																													 //    - value to
																													 //    - output
													 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 //    - fruit
{
	cout << "For " << seasonAr[seasonVar] << ", ";
	cout << "you might want to try a(n) " << STRING_AR[seasonVar][compRandVal];
	cout << endl << endl;
}
