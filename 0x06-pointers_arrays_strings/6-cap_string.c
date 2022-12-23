#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: The string to modify
 *
 * Return: A pointer to the modified string s
 */
char *cap_string(char *s)
{
	int i, sep;

	sep = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (sep && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
		sep = (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}');
	}

	return (s);
}
