/*
COSC-1420: "C" Programming
Week 6 Assignment - #10.
John-David Rodriguez | john-david.rodriguez@my.tccd.edu
07/04/2022
*/

/*
Task : #10. Write a function called dictionarySort() that sorts a dictionary, as defined in Programs 9.9 and 9.10 
			below, into alphabetical order.
*/

#define _CRT_SECURE_NO_WARNINGS

//header files
#include<stdio.h>
#include<string.h>


struct entry
{
	char word[15];
	char definition[50];
};

// create a function called dictionarySort() that sorts a dictionary

void dictionarySort(struct entry dictionary[], int num_words);

int main()
{

	int n;

	struct entry dictionary[20] =

	{ { "joy", "a feeling of great pleasure and happiness" },

	{ "anxiety", "a feeling of worry" },

	{ "affix", "to append; attach" },

	{ "borrow", "take and use with the intention of returning it" },

	{ "agar", "a jelly made from seaweed" },

	{ "abyss", "a bottomless pit" },

	{ "programming", "the process of writing computer programs"},

	{ "aigrette", "an ornamental cluster of feathers" },

	{ "collate", "collect and combined" },

	{ "aerie", "a high nest" }

	};

	int num_words = 10;

	printf("Before sorting :\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for (int i = 0; i < num_words; ++i)
	{
		printf("%d. %-15s :\t%s\n\n", i + 1, dictionary[i].word, dictionary[i].definition);
	}

	// sort the dictionary words
	dictionarySort(dictionary, num_words);

	printf("\nAfter sorting  :\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for (int i = 0; i < num_words; ++i)
	{
		printf("%d. %-15s :\t%s\n\n", i + 1, dictionary[i].word, dictionary[i].definition);
	}

	return 0;
}

// dictionarySort() definition

void dictionarySort(struct entry dictionary[], int num_words)
{
	char tmp_word[15];
	char tmp_definition[50];

	// bubble sort algorithm to sort words
	

	for (int i = 0; i < num_words - 1; ++i)
	{
		for (int j = i + 1; j < num_words; ++j)
		{
			if (strcmp(dictionary[i].word, dictionary[j].word) > 0)
			{
				strcpy(tmp_word, dictionary[i].word);
				strcpy(tmp_definition, dictionary[i].definition);

				strcpy(dictionary[i].word, dictionary[j].word);
				strcpy(dictionary[i].definition, dictionary[j].definition);

				strcpy(dictionary[j].word, tmp_word);
				strcpy(dictionary[j].definition, tmp_definition);
			}
		}
	}
}
