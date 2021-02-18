/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION ConvertCharToSeasons
 * ----------------------------------------------------------------------------
 * 		This function receives a valid season character and converts it from
 * 			season character to a variable of type Seasons
 * 		==> returns the variable of type Seasons
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			seasonChar : season character to calc a variable of type Seasons
 *
 * POST-CONDITIONS
 * 		==> returns the variable of type Seasons
 ******************************************************************************/
Seasons ConvertCharToSeasons(char seasonChar) // IN - season character to calc
											  											//	- a variable of type Seasons
{
	Seasons seasonConvert;	// CALC - season convert to calc a variable of type
													//		- Seasons

	switch(seasonChar)
	{
		case 'W': seasonConvert = WINTER;
				break;
		case 'S': seasonConvert = SPRING;
				break;
		case 'U': seasonConvert = SUMMER;
				break;
		case 'F': seasonConvert = FALL;
				break;
	}

	return seasonConvert;
}
