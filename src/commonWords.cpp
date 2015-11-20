/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) {
	char **string;
	string = (char **)malloc(SIZE*sizeof(char *));
	int iterator = 0, iterator2 = 0, iterator3 = 0, iterator4 = 0, iterator5 = -1, it = 0, len = 0, len2 = 0;
	if (str1 == NULL || str2 == NULL)
		return NULL;
	for (iterator = 0; iterator < SIZE; iterator++)
	{
		string[iterator] = (char *)malloc(SIZE*sizeof(char));
	}
	iterator = 0;
	while (str1[iterator] != '\0')
	{
		iterator2 = iterator;
		iterator3 = 0;
		it = iterator;
		len2 = 0;
		while (str1[it] != ' ')
		{
			len2++;
			it++;
		}
		if (str1[iterator] != ' ')
		{
			while ((str2[iterator3] != str1[iterator2]) && str2[iterator3] != '\0')
			{
				iterator3++;
			}
			if (str2[iterator3] == str1[iterator] && (str2[iterator3 - 1] == ' ' || iterator3 == 0))
			{
				len = 0;
				while (str1[iterator2] != ' ')
				{
					if (str2[iterator3] == str1[iterator2])
					{
						iterator2++;
						iterator3++;
						len++;
					}
					else
						break;
				}
			}
		}
		if (len == len2 && iterator2 != iterator)
		{
			iterator5 = 0;
			for (iterator3 = iterator; iterator3 < iterator2; iterator3++)
			{
				string[iterator4][iterator5] = str1[iterator3];
				iterator5++;
			}
			string[iterator4][iterator5] = '\0';
			iterator4++;
		}
		iterator++;
	}
	if (iterator5 < 0)
		return NULL;
	return string;
}
