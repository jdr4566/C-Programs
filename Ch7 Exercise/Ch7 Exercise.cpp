/*
COSC-1420: "C" Programming
Week 5 Assignment - #10.
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/01/2022
*/

#define _CRT_SECURE_NO_WARNINGS

//header
#include <stdio.h>

//define prime() function
int prime() {
    int n, i, c = 0;
    printf("Enter any number n:");
    scanf("%d", &n);

    //logic
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            c++;
        }
    }

    if (c == 2) {
        printf("n is a Prime number");
    }
    else {
        printf("n is not a Prime number");
    }
    return 0;
}


int main() {

    printf("Hello and welcome to prime number checker! \n\n");
    //call function
    prime();
    return 0;
}