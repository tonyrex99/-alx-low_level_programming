#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 8

/**
 * main - generates random valid passwords
 * Return: 0 (on success).
 *
 */

int main(void)
{
  srand(time(NULL));

  for (int i = 0; i < LENGTH; i++)
    putchar(rand() % (91 - 65) + 65);

  return 0;
}
