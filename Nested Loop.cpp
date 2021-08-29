/*----------------------------------------------------------------------
 Programmer : JD Rodriguez
 Date       : June 2021
 Description: This Program will practice using nested loops

-----------------------------------------------------------------------*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	

int main(void)
{
	int outer, inner;

	for (outer = 1; outer <= 4; outer++)
		for (inner = 1; inner <= 10; inner++)
			printf("outer = %i, and inner = %i\n", outer, inner);



}