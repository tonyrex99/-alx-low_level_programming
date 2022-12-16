#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if an integer number exist between 0 and 9
 * @c: integer number to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
