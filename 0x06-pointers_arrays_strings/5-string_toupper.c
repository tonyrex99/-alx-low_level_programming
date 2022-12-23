#include "main.h"

/**
 * string_toupper - Change all lowercase letters of a string to uppercase
 * @s: The string to modify
 *
 * Return: A pointer to the modified string s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');

	return (s);
}
