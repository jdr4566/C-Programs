/*
COSC-1420: "C" Programming
Week 4 Assignment
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
06/23/2022
*/

/*
Description of Assignment : #3. Write a program to copy one file to another, replacing all lowercase characters with their uppercase equivalents.
*/

#define _CRT_SECURE_NO_WARNINGS

//header
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	FILE* fp1, * fp2;
	char ch;
	fp1 = fopen("small.txt", "r");		//small.txt is lowercase characters
	if (fp1 == NULL)
	{
		puts("File does not exist..");
		exit(1);
	}
	fp2 = fopen("capital.txt", "w");	//capital.txt is where uppercase equivalents are copied.
	if (fp2 == NULL)
	{
		puts("File does not exist..");
		fclose(fp1);
		exit(1);
	}
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch = toupper(ch);
		fputc(ch, fp2);
	}
	printf("File successfully copied");
	return 0;
}

