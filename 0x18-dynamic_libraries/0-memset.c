#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: memory address to be filled
 * @b: the desired value
 * @n: bytes of memory
 * Return: value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem_size;

	mem_size = 0;
	while (mem_size < n)
	{
	s[mem_size++] = b;
	}
	return (s);
}
