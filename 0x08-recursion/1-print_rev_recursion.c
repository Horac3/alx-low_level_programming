#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: memory address to be filled
 * Return: value for n bytes
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
