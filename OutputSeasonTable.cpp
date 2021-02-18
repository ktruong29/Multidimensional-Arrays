/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION OutputSeasonTable
 * ----------------------------------------------------------------------------
 * 		This function will output the table of season, variety, and fruit
 * 			as follows
 * 		SEASON    VARIETY     FRUIT
 *		--------  ----------  -----------------------
 * 		==> returns nothing - This will output the table of season, variety,
 * 							  and fruit
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		This function does not need a defined value passed in
 *
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the table of season, variety,
 * 							      and fruit
 ******************************************************************************/
void OutputSeasonTable()
{
	cout << left;

	cout << setw(SEASON_COL)  << "SEASON"
			 << setw(VARIETY_COL) << "VARIETY"
			 << setw(FRUIT_COL)   << "FRUIT"
			 << endl;

	cout << setw(SEASON_COL)  << "--------"
			 << setw(VARIETY_COL) << "----------"
			 << setw(FRUIT_COL)   << "-----------------------"
			 << endl;

	cout << right;
}
