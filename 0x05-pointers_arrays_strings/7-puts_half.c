/**
 * puts_half - Print half of a string, followed by a newline
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	len++;

	int start = (len - 1) / 2;
	if (len % 2 == 0)
	{
		start++;
	}
	int i;
	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
