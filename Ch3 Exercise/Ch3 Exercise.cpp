/*
COSC-1420: "C" Programming
Week 2 Assignment
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
06/05/2022
*/

/*
Description of Assignment : #6. Write a program to evaluate the polynomial shown here:
							3x3  -  5x2   + 6
							for x = 2.55
*/

#include <stdio.h>
#include <math.h>

int main() {

	float x = 2.55;	// x is the value we are given

	float result;	// declaring variable for the result calculation

	result = 3 * pow(x, 3) - 5 * pow(x, 2) + 6; //pow function will perform the math

	//now print out the results
	printf("Result: %f", result);

	return 0;
}
