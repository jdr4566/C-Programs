/*----------------------------------------------------------------------
 Programmer : JD Rodriguez
 Date       : June 2021
 Description: This Program will practice using do-while loops

-----------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main(void)
{
	int n1;

	do
	{
		printf("Enter a positive value\n");
		scanf("%i", &n1);
		printf("You entered %i\n\n");

	} while (n1 <= 0);


	printf("Thanks for the positive number\n");
	printf("this code is past the loop\n");

}