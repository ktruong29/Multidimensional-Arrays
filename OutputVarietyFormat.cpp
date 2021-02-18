/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION OutputVarietyFormat
 * ----------------------------------------------------------------------------
 * 		This function receives a 2D fruit string array to output the seasons, type
 * 		of fruits, and 6 possible fruits for each season as follows
 * 			Grapefruit  WINTER    Oroblanco Grapefruit
 *           			SPRING    Star Ruby Red Grapefruit
 *            			SUMMER    Rio Red Grapefruit
 *            			FALL      Marsh Grapefruit
 *
 *         	Mandarin    WINTER    Satsuma Mandarin
 *           			SPRING    Honey Mandarin
 *            			SUMMER    Gold Nugget Mandarin
 *            			FALL      Kishu Minu Mandarin
 * 		==> returns nothing - This will output the seasons, type of fruits, and
 * 							  6 possible fruits for each season
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			FRUIT_AR : fruit array to output seasons, type of fruits, and 6
 * 					   possible fruits for each season
 *
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the seasons, type of fruits, and
 * 							  6 possible fruits for each season
 ******************************************************************************/
void OutputVarietyFormat(const string STRING_AR[][TOTAL_FRUITS])// IN - fruit array
																																//    - to output
																																//    - seasons,
																																//    - 6 possible
																																//    - fruits
{
	int seasonRow; // CALC - season index to output seasons and fruit names
	int fruitCol;  // CALC - fruit index to output seasons and fruit names

	cout << left;

	for(fruitCol = 0; fruitCol < TOTAL_FRUITS; fruitCol++)
	{
		cout << setw(VARIETY_COL) << fruitAr[fruitCol];

		for(seasonRow = 0; seasonRow < TOTAL_SEASONS; seasonRow++)
		{

			cout << setw(SEASON_COL) << seasonAr[seasonRow];
			cout << setw(FRUIT_COL)  << STRING_AR[seasonRow][fruitCol];

			cout << endl;

			cout << setw(VARIETY_COL) << " ";
		}
		cout << endl;
	}
}
