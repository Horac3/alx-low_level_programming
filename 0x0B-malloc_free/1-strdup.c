#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a
 * new string which is a duplicate of the string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	newstr = malloc(sizeof(char) * (strlen(str) + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	strcpy(newstr, str);

	return (newstr);
}

