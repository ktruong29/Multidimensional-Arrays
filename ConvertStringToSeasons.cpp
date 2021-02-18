/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION ConvertStringToSeasons
 * ----------------------------------------------------------------------------
 * 		This function receives season string and converts season string to a
 * 			variable of type Seasons
 * 		==> returns the variable of type Seasons
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			seasonStr: season string to calc variable of type Seasons
 *
 * POST-CONDITIONS
 * 		==> returns the variable of type Seasons
 ******************************************************************************/
Seasons ConvertStringToSeasons(string seasonStr)  // IN - season string to calc
												  												//    - variable of type Seasons
{
	Seasons seasonConvert;	// CALC - season convert to stores variable of type
													//		  - Seasons

	switch(seasonStr[0])
	{
		case 'W': seasonConvert = WINTER;
				  break;
		case 'S': if((seasonStr[1] == 'p'))
				  	  seasonConvert = SPRING;
				  else
					  seasonConvert = SUMMER;
				  break;
		case 'F': seasonConvert = FALL;
				  break;
	}
	return seasonConvert;
}
