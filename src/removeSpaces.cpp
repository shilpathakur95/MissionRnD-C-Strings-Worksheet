/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	int iterate, iterate2 = 0;
	if (str == "" || str == nullptr)
		return '\0';
	for (iterate = 0; str[iterate] != '\0'; iterate++)
	{
		if (str[iterate] != ' ')
		{
			str[iterate2] = str[iterate];
			iterate2++;
		}
	}
	str[iterate2] = '\0';
}