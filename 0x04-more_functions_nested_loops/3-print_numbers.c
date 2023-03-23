#include "main.h"

/**
 * print_numbers - prints 0-9 in a for-loop
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

