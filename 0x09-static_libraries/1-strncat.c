#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from str2
 * @str1: input value
 * @str2: input value
 * @n: input value
 * Return: str1
 */

char *_strncat(char *str1, char *str2, int n)

{
int i;
int j;
i = 0;
while (str1[i] != '\0')
{
i++;
}
j = 0;
while (j < n && str2[j] != '\0')
{
str1[i] = str2[j];
i++;
j++;
}
str1[i] = '\0';
return (str1);
}
