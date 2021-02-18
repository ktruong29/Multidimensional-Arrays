/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION OutputSeasonFormat
 * ----------------------------------------------------------------------------
 * 		This function receives a 2D fruit string array to output the seasons,
 * 			type of fruits, and 6 possible fruits for each season as follows
 * 				WINTER    Grapefruit  Oroblanco Grapefruit
 *       			 	  	Mandarin    Satsuma Mandarin
 *         			  	Orange      Moro Blood Orange
 *
 *        SPRING    Grapefruit  Star Ruby Red Grapefruit
 *        			 	  Mandarin    Honey Mandarin
 *          			  Orange      Washington Navel Orange
 * 		==> returns nothing - This will output the seasons, type of fruits, and
 * 		6 possible fruits for each season
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			FRUIT_AR : fruit array to output seasons, type of fruits, and 6
 * 					   possible fruits for each season
 *
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the seasons, type of fruits, and
 * 		6 possible fruits for each season
 ******************************************************************************/
void OutputSeasonFormat(const string STRING_AR[][TOTAL_FRUITS])// IN - fruit array
																														   //    - to output
																														   //    - seasons,
																														   //    - 6 possible
																														   //    - fruits
{
	int seasonRow;	// CALC - season index to output seasons and fruit names
	int fruitCol;		// CALC - fruit index to output seasons and fruit names

	cout << left;

	for(seasonRow = 0; seasonRow < TOTAL_SEASONS; seasonRow++)
	{
		cout << setw(SEASON_COL) << seasonAr[seasonRow];

		for(fruitCol = 0; fruitCol < TOTAL_FRUITS; fruitCol++)
		{
			cout << setw(VARIETY_COL) << fruitAr[fruitCol]
				 	 << setw(FRUIT_COL)   << STRING_AR[seasonRow][fruitCol];

			cout << endl;

			cout << setw(SEASON_COL) << " ";
		}
		cout << endl;
	}
}
