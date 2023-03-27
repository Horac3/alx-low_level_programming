#include "main.h"

/**
 * char *_strcpy - a function that copies a string pointed to by src
 * @cpy: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *cpy, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; j++)
	{
		cpy[j] = src[j];
	}
	cpy[l] = '\0';
	return (cpy);
}

