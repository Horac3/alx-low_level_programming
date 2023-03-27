#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	i = len - 1;
	for (j = 0 ; j <= i ; o++)
	{
	`	if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}

