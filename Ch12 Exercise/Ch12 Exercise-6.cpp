/*
COSC-1420: "C" Programming
Week 7 Assignment - #6 Ch12
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/06/2022
*/

/*
Task : #6 Write a macro IS_UPPER_CASE that gives a nonzero
       value if a character is an uppercase letter.
*/

#define _CRT_SECURE_NO_WARNINGS

//header files
#include <stdio.h>

// creating macro definition for IS_UPPER_CASE
#define IS_UPPER_CASE(x) (x>='A' && x<='Z') ? (1) : (0)

// testing IS_UPPER_CASE macro
int main() {

    printf("%d\n", IS_UPPER_CASE('A'));
    printf("%d\n", IS_UPPER_CASE('a'));

    return 0;
}
