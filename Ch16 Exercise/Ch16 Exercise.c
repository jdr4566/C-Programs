/*
COSC-1420: "C" Programming
Week 9 Assignment - #1 Ch16
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/07/2022
*/

/*
Task : #1. Type in and run the program presented in this chapter.
		Check the program's results by comparing the original file you chose to
		copy with the filename you entered to copy and ensure the two are the same.
*/

#define _CRT_SECURE_NO_WARNINGS

//header files
#include <stdio.h>
// Program to copy one file to another 


int main(int argc, char* argv[])
{
	FILE* in, * out;
	int c;

	if (argc != 3) {
		fprintf(stderr, "Need two files names\n");
		return 1;
	}

	if ((in = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't read %s.\n", argv[1]);
		return 2;
	}

	if ((out = fopen(argv[2], "w")) == NULL) {
		fprintf(stderr, "Can't write %s.\n", argv[2]);
		return 3;
	}

	while ((c = getc(in)) != EOF)
		putc(c, out);

	printf("File has been copied.\n");

	fclose(in);
	fclose(out);

	return 0;
}



