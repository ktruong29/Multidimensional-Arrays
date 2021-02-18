/******************************************************************************
 * AUTHOR		 : Kevin Truong
 * LAB #23		 : Multidimensional Arrays
 * CLASS		 : CS1A
 * SECTION		 : TTh: 1pm
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * FUNCTION OutputFruitHeading
 * ----------------------------------------------------------------------------
 * 		This function receives a name of an input file to read in the fruit
 * 			heading and output the fruit heading from a text file
 * 		==> returns nothing - This will output the fruit heading from a text file.
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following does not need a defined value passed in
 *
 * POST-CONDITIONS
 * 		==> returns nothing - This will read output the fruit heading from
 * 							  a text file.
 ******************************************************************************/
void OutputFruitHeading(string fileName) // IN - file name to read input from
										 										 //	   - an input file
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * HEADING_SIZE : fruit heading array size
	 *************************************************************************/
	const int HEADING_SIZE = 4;

	string   headingStr[HEADING_SIZE];	// CALC & OUT - fruit heading string
	int      headingIndex;							// CALC       - heading index to store
									 										//			  		- string into an array
	ifstream fin;												// CALC	      - input stream variable

	fin.open(fileName.c_str());

	headingIndex = 0;

	while(headingIndex < HEADING_SIZE && fin)
	{
		getline(fin, headingStr[headingIndex]);

		headingIndex++;
	}
	fin.close();

	for(headingIndex = 0; headingIndex < HEADING_SIZE; headingIndex++)
	{
		cout << headingStr[headingIndex] << endl;
	}
}
