/**
 * print_buffer - print the content of a buffer
 * @b: a pointer to the buffer to be printed
 * @size: the size of the buffer in bytes
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0)
		{
			print_hex(i, 8);
			putchar(':');
			putchar(' ');
		}
		print_hex(*(b + i), 2);
		putchar(' ');
		if ((i + 1) % 10 == 0 || i == size - 1)
		{
			int j;

			for (j = i - (i % 10); j <= i; j++)
			{
				if (*(b + j) >= 32 && *(b + j) <= 126)
				{
					putchar(*(b + j));
				}
			else
			{
				putchar('.');
			}
			}
			putchar('\n');
		}
	}
}

/**
 * print_hex - print an integer as a hexadecimal number
 * @n: the integer to be printed
 * @digits: the minimum number of digits to print
 */
void print_hex(int n, int digits)
{
	int i;
	char hex_chars[] = "0123456789abcdef";

	for (i = digits - 1; i >= 0; i--)
	{
		putchar(hex_chars[(n >> (4 * i)) & 0xf]);
	}
}
