/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int iterator, iterator2, iterator3, space = 0;
	char temp;
	for (iterator = 0; iterator < len; iterator++)
	{
		iterator2 = iterator;
		if (input[iterator] != ' ')
		{
			while (input[iterator2] != ' ' && iterator2 < len)
				iterator2++;
			if (iterator2 != iterator)
			{
				for (iterator3 = iterator2 - 1; iterator3 != iterator&&iterator<iterator3; iterator3--)
				{
					temp = input[iterator3];
					input[iterator3] = input[iterator];
					input[iterator] = temp;
					iterator++;
				}
			}
			iterator = iterator2;
		}
	}
	iterator2 = len - 1;
	for (iterator = 0; iterator != iterator2&&iterator < iterator2; iterator++)
	{
		temp = input[iterator];
		input[iterator] = input[iterator2];
		input[iterator2] = temp;
		iterator2--;
	}
}
