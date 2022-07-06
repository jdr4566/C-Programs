/*
COSC-1420: "C" Programming
Week 6 Assignment - #8
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/04/2022
*/

/*
Task : #8. Write a function called sort3() to sort three integers into ascending order.
		   (This function is not to be implemented with arrays.)
*/

#define _CRT_SECURE_NO_WARNINGS

//header files
#include <stdio.h>

//sort3() to sort three integers into ascending order.
void sort3(int x, int y, int z)
{
	printf("\nIn ascending orders, the 3 integers are: \t");
	// All six cases 
	if (z <= y && y <= x)
	{
		printf("%d, %d, %d", z, y, x);
	}
	else if (x <= y && y <= z)
	{
		printf("%d, %d, %d", x, y, z);
	}
	else if (x <= z && z <= y)
	{
		printf("%d, %d, %d", x, z, y);
	}
	else if (z <= x && x <= y)
	{
		printf("%d, %d, %d", z, x, y);
	}
	else if (y <= x && x <= z)
	{
		printf("%d, %d, %d", y, x, z);
	}
	else if (y <= z && z <= x)
	{
		printf("%d, %d, %d", y, z, x);
	}
}

int main()
{
	int x, y, z;

	//Input 3 integers
	printf("\nEnter the 1st integer: ");
	scanf("%d", &x);

	printf("\nEnter the 2nd integer: ");
	scanf("%d", &y);

	printf("\nEnter the 3rd integer: ");
	scanf("%d", &z);

	printf("\nNumbers originally: %d, %d, %d\n", x, y, z);

	//calling sort3() function.
	sort3(x, y, z);

	return 0;
}
