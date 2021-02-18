/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION ConvertStringToFruits
 * ----------------------------------------------------------------------------
 * 		This function receives fruit string and converts fruit string to a
 * 			variable of type Fruits
 * 		==> returns the variable of type Fruits
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			fruitStr: fruit string to calc variable of type Fruits
 *
 * POST-CONDITIONS
 * 		==> returns the variable of type Fruits
 ******************************************************************************/
Fruits ConvertStringToFruits(string fruitStr)  // IN - fruit string to calc
											   											 //    - variable of type Fruits
{
	Fruits fruitConvert; // CALC - fruit convert to stores variable of type Fruits

	switch(fruitStr[0])
	{
		case 'G' : fruitConvert = GRAPEFRUIT;
				   break;
		case 'M' : fruitConvert = MANDARIN;
				   break;
		case 'O' : fruitConvert = ORANGE;
				   break;
		case 'E' : fruitConvert = EXOTIC;
				   break;
		case 'A' : if((fruitStr[1] == 'p'))
					  fruitConvert = APPLE;
				   else
					  fruitConvert = AVOCADO;
				   break;
	}
	return fruitConvert;
}
