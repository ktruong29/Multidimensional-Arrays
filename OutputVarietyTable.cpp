/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION OutputVarietyTable
 * ----------------------------------------------------------------------------
 * 		This function will output the table of variety, season, and fruit
 * 		as follows
 * 		    VARIETY     SEASON		FRUIT
 *			----------  --------	-----------------------
 * 		==> returns nothing - This will output the table of variety, season,
 * 		and fruit
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		This function does not need a defined value passed in
 *
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the table of variety, season,
 * 							  and fruit
 ******************************************************************************/
void OutputVarietyTable()
{
	cout << left;

	cout << setw(VARIETY_COL)  << "VARIETY"
			 << setw(SEASON_COL)   << "SEASON"
			 << setw(FRUIT_COL)    << "FRUIT"
			 << endl;

	cout << setw(VARIETY_COL) << "----------"
			 << setw(SEASON_COL)  << "--------"
			 << setw(FRUIT_COL)   << "-----------------------"
			 << endl;

	cout << right;
}
