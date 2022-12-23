#include "main.h"

/**
 * leet - Encode a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string s
 */
char *leet(char *str)
{
	int i;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			if (letters[j] == str[i])
			{
				str[i] = numbers[j];
			}
		}
	}

	return (str);
}
