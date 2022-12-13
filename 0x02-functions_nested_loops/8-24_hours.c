#include <stdio.h>

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 *
 * This function prints every minute of the day of Jack Bauer, starting from
 * 00:00 and ending at 23:59. It uses two nested for loops to iterate through
 * the hours and minutes, and prints each minute using the format HH:MM.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
