#include<stdio.h>
#include<string.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters_of_the_alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24 ; i++)
	{
		putchar((letters_of_the_alphabet[i]));
	}

	putchar('\n');

	return (0);
}
