#include "main.h"

/**
 * rev_string - Reverses a string
 * @c: Input string
 * Return: String in reverse
 */

void rev_string(char *c)
{
	char rev = c[0];
	int counter = 0;
	int i;

	while (c[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = c[i];
		c[i] = c[counter];
		c[counter] = rev;
	}
}

