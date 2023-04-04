#include "main.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the bytes to accept in s
 *
 * Return: the number of bytes in the initial segment of s that consist
 *         only of bytes from accept
 */
unsigned int _strspn(const char *s, const char *accept)
{
	unsigned int n = 0;
	const char *p;

	while (*s)
	{
	for (p = accept; *p; p++)
	{
	if (*s == *p)
	{
	n++;
	break;
	}
	}
	if (!*p)
	break;
	s++;
	}

	return (n);
}

