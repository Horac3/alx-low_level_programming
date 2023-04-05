#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: memory address to be filled
 * Return: value for n bytes
*/
#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}

