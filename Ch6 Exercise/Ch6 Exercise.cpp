/*
COSC-1420: "C" Programming
Week 4 Assignment
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
06/20/2022
*/

/*
Description of Assignment : #6. You don’t need to use an array to generate Fibonacci numbers. 
								You can simply use three variables: two to store the previous two Fibonacci numbers and one to store the current one.
								Rewrite the program below so that arrays are not used.
								Because you’re no longer using an array, you need to display each Fibonacci number as you generate it.
*/

#define _CRT_SECURE_NO_WARNINGS

//header
#include <stdio.h>


int main(void) {

	int f1 = 0, f2 = 1, n, i;

	printf("Please enter the number of terms for Fibonacci : \n");
	//get input
	scanf("%d", &n);

	printf("The Fibonacci numbers are : \t\n");

	//create for loop
	for (i = 1; i <= n; i++)

	{

		printf("%d ", f2);

		int next = f1 + f2;

		f1 = f2;

		f2 = next;

	}
	return 0;

}
