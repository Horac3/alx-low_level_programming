#include "main.h"

/**
 * _strcat - concatenates two strings
 * @str1: input value
 * @str2: input value
 * Return: void
 */

char *_strcat(char *str1, char *str2)

{
int i;
int j;
i = 0;
while (str1[i] != '\0')
{
i++;
}
j = 0;
while (str2[j] != '\0')
{
str1[i] = str2[j];
i++;
j++;
}
str1[i] = '\0';
return (str1);
}

