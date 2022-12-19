/**
 * _strcpy - Copy a string to a buffer
 * @dest: The buffer to copy the string to
 * @src: The string to copy
 *
 * Return: A pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
