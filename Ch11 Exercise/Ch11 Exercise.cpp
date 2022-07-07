/*
COSC-1420: "C" Programming
Week 7 Assignment - #3
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/06/2022
*/

/*
Task : #3.  Given that the expression ~0 produces an integer that contains all 1s, 
			write a function called int_size() that returns the number of bits
			contained in an int on your particular machine.
*/

#define _CRT_SECURE_NO_WARNINGS

//header files
#include <stdio.h>


//function that counts number of bits in an unsigned integer by
//shifting integer right until reaching 0

int int_size() {

	int count = 0;
	unsigned int u = ~0;
	while (u)
	{
		u >>= 1;
		++count;
	}

	return count;
}

int main() {

	printf("%d\n", int_size());

	return 0;
}
