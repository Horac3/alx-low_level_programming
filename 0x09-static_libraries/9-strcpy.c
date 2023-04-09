#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @to: copy to
 * @frm: copy from
 * Return: string
 */
char *_strcpy(char *to, char *frm)
{
	int l = 0;
	int x = 0;

	while (*(frm + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		to[x] = frm[x];
	}
	to[l] = '\0';
	return (to);
}

