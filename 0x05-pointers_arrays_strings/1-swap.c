#include "main.h"
/**
 *swap_int - swaps two integers.
 *@a: pointer to one integer.
 *@b: pointer to the second integer.
 *
 *Return: void.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
