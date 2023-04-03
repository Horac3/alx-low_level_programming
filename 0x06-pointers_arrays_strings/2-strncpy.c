#include "main.h"

/**
 * _strncpy - copy a string
 * @str1: input value
 * @str2: input value
 * @n: input value
 * Return: str1
*/
char *_strncpy(char *str1, char *str2, int n)
{
int j;
j = 0;
while (j < n && str2[j] != '\0')
{
str1[j] = str2[j];
j++;
}
while (j < n)
{
str1[j] = '\0';
j++;
}
return (str1);
}

