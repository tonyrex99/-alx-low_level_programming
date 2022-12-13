#include <stdio.h>

/**
 * times_table - Print the 9 times table
 *
 * This function prints the 9 times table, starting with 0 and going up to 9.
 * It uses two nested for loops to iterate through the numbers in the table,
 * and prints each number with the correct formatting and spacing.
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int product = row * col;

			if (col > 0)
			{
				printf("%s", (product < 10) ? ",  " : ", ");
			}

			printf("%d", product);
		}

		printf("\n");
	}
}
