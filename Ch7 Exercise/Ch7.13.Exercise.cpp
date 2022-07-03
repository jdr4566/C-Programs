/*
COSC-1420: "C" Programming
Week 5 Assignment - #13
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/01/2022
*/

#define _CRT_SECURE_NO_WARNINGS

// Program to sort an array of integers into ascending order

// header files
#include<stdio.h>


//function to sort the array
void sort(int a[], int n, char c)

{

	int i, j, temp;

	//if choice is a sort in ascending order
	if (c == 'a')

	{

		for (i = 0; i < n - 1; ++i)

		{

			for (j = i + 1; j < n; ++j)

			{

				if (a[i] > a[j])

				{

					temp = a[i];

					a[i] = a[j];

					a[j] = temp;

				}

			}

		}

	}

	//if choice is d sort in descending order

	if (c == 'd')

	{

		for (i = 0; i < n - 1; ++i)

		{

			for (j = i + 1; j < n; ++j)

			{

				if (a[i] < a[j])

				{

					temp = a[i];

					a[i] = a[j];

					a[j] = temp;

				}

			}

		}

	}

}

//start of main function

int main(){

	//variables

	int i;

	char choice;

	//array

	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };

	//display a menu

	printf("a) Ascending \n");

	printf("d) Decsending \n");

	printf("Enter a choice: ");

	scanf("%c", &choice);

	//if choice is a

	if (choice == 'a')

	{

		printf("The array before the sort: \n");

		for (i = 0; i < 16; ++i)

		{

			printf("%i ", array[i]);

		}

		sort(array, 16, choice);

		printf("\n\nThe array after the sort:\n");

		for (i = 0; i < 16; ++i)

		{

			printf("%i ", array[i]);

		}

		printf("\n");

	}

	//if choice is d

	if (choice == 'd')

	{

		printf("The array before the sort: \n");

		for (i = 0; i < 16; ++i)

		{

			printf("%i ", array[i]);

		}

		sort(array, 16, choice);

		printf("\n\nThe array after the sort:\n");

		for (i = 0; i < 16; ++i)

		{

			printf("%i ", array[i]);

		}
		printf("\n");

	}
	return 0;

}
