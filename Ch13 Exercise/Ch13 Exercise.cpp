/*
COSC-1420: "C" Programming
Week 8 Assignment - #1 Ch13
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/07/2022
*/

/*
Task : #1.  Define a type FunctionPtr() (using typedef) that represents a pointer to 
		   a function that returns an int and that takes no arguments. Refer to 
		   Chapter 10, “Pointers,” for the details on how to declare a
		   variable of this type.
*/

#define _CRT_SECURE_NO_WARNINGS

//header files
#include<stdio.h>

// define FunctionPtr  using typedef 
typedef int (*FunctionPtr)();

// define a function that will return an integer value
int getInteger() {
    return 10;
}

// Driver code
int main() {
    // assign the address of function getInteger into FunctionPtr
    FunctionPtr ptr = &getInteger;

    // call the function FunctionPtr 
    int integer = (*ptr)();

    // display the return  value
    printf("Integer: %d\n", integer);

    return 0;
}
