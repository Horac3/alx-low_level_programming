#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */


char *str_concat(char *s1, char *s2)
{
	int total_length;
	char *concatenated_string;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	total_length = strlen(s1) + strlen(s2) + 1;

	concatenated_string = malloc(total_length * sizeof(char));

	if (concatenated_string == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated_string, s1);
	strcat(concatenated_string, s2);

	return (concatenated_string);
}

