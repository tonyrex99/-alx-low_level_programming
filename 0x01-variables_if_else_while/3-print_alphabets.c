#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters_of_the_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar((letters_of_the_alphabet[i]));
	}
	for (i = 0; i < 26 ; i++)
	{
		putchar(toupper(letters_of_the_alphabet[i]));
	}
	putchar('\n');

	return (0);
}
