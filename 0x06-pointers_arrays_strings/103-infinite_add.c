#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: size of result buffer
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, sum, carry = 0;

	i = j = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 1 > size_r || j + 1 > size_r)
		return (0);
	r[i + j + 1] = '\0';
	k = i + j - 1;
	i--;
	j--;
	while (k >= 0)
	{
		l = carry;
		if (i >= 0)
			l += n1[i--] - '0';
		if (j >= 0)
			l += n2[j--] - '0';
		sum = l % 10;
		carry = l / 10;
		r[k--] = sum + '0';
	}
	if (carry)
		r[k] = carry + '0';
	else
		r++;
	return (r);
}
