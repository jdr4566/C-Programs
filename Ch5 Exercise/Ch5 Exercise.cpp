/*
COSC-1420: "C" Programming
Week 3 Assignment
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
06/13/2022
*/

/*
Description of Assignment : #6. Write a program that takes an integer keyed in from the terminal and extracts
								and displays each digit of the integer in English.
								So, if the user types in 932, the program should display:
								nine three two
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_INPUT_LEN 100

const char* digits[] = { "zero","one","two"  ,"three","four",
                        "five","six","seven","eight","nine" };

int main()
{
    int i;
    char format[10];
    char str[MAX_INPUT_LEN + 1];
    printf("Please enter a integer: \n");
    sprintf(format, "%c%us", '%', MAX_INPUT_LEN); // now format = "%100s"
    scanf(format, str); // will write into str at most 100 characters
    for (i = 0; str[i] != 0; i++)
    {
        if ('0' <= str[i] && str[i] <= '9')
            printf("%s ", digits[str[i] - '0']);
        else
            printf("invalid integer ");
    }
    return 0;
}
