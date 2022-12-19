#include "main.h"

/**
 * rev_string - Reverse a string in place
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int length_of_string;

	length_of_string = 0;

	while (*(s + length_of_string) != '\0')
	{
		length_of_string++;
	}

	int i;
	char temp;

	for (i = 0; i < length_of_string / 2; i++)
	{
		temp = s[i];
		s[i] = s[length_of_string - i - 1];
		s[length_of_string - i - 1] = temp;
	}
}
