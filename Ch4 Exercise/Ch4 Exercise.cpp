/*
COSC-1420: "C" Programming
Week 3 Assignment
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
06/13/2022
*/

/*
Description of Assignment : #6. Write a program to evaluate the polynomial shown here:
							3x3  -  5x2   + 6
							for x = 2.55
*/


//header file
#include <stdio.h>

int main(void) 

{	
	//declare variables
	int n, two_to_the_n;
	//print to the screen
	printf("TABLE OF POWERS OF TWO\n\n");

	printf(" n     2 to the n\n");

	printf("---    ---------------\n");
	//initlaize the variable
	two_to_the_n = 1;

	//start for loop
	for (n = 0; n <= 10; ++n) 
	{
		printf("%2i        %i\n", n, two_to_the_n); two_to_the_n *= 2;
	}

	return 0;
}

