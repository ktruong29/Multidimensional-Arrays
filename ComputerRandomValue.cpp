/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION ComputerRandomValue
 * ----------------------------------------------------------------------------
 * 		This function calculates the computer random value (0-5)
 * 		==> returns the computer random value
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		This function does not need a defined value passed in
 *
 * POST-CONDITIONS
 * 		==> returns the computer random value
 ******************************************************************************/
int ComputerRandomValue()
{
	return rand() % TOTAL_FRUITS;

}
