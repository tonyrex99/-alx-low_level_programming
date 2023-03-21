#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @src: The first part o the string
 * @dest: The second part of the string
 *
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; src[j] ; j++)
		dest[i++] = src[j];

	return (dest);

}
