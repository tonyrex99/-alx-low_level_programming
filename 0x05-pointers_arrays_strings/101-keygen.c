#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 8

/**
 * main - program to randomly generate valud passwords
 * Return: 0 (on success).
 *
 */

int main(void)
{
	int password, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		password = (rand() % 128);
		sum += password;
		printf("%c", password);
	}
	printf("%c", 2772 - sum);

	return (0);
}
