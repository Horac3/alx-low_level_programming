#include "main.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the bytes to accept in s
 *
 * Return: the number of bytes in the initial segment of s that consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
