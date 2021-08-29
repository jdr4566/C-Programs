/*----------------------------------------------------------------------
 Programmer : JD Rodriguez
 Date       : June 2021
 Description: This Program will practice using for loops

-----------------------------------------------------------------------*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	

int main(void)
{

	int counter, total = 0, n1;

	for(counter = 1; counter <= 5; counter++)
	{
		printf("Enter an integer\n");
		scanf("%i", &n1);
		total = total + n1;				//Keep a running total
		
	}


	printf("The total is %i\n", total);

}