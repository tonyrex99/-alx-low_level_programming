#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: RETURNS ZERO
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		errors();
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		errors();
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

int is_digit(char *s)
{

	int len = _strlen(s);

	for (int i = 0; i < len; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
return (1)	;
}

void errors(void)
{
	printf("Error\n");
}
