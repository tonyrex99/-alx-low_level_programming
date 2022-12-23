#include "main.h"

/**
 * rot13 - encode strings using rot13 encoding.
 * @str: string to be encoded
 *
 * Return: encoded string.
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
	}

	return (str);
}
