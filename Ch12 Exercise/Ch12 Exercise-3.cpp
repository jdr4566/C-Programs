/*
COSC-1420: "C" Programming
Week 7 Assignment - #3 Ch12
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/06/2022
*/

/*
Task : #3. Define a macro MIN that give the minimum of two values. 
		   The write a program to test the macro definition.
*/

#define _CRT_SECURE_NO_WARNINGS

//header files
#include <stdio.h>

//create macro definition for MIN
#define MIN(x,y) (((x) < (y)) ? (x) : (y))

//testing MIN macro
int main() {

	printf("%d\n", MIN(3, 2));
	printf("%d\n", MIN(2, 3));

	return 0;
}
