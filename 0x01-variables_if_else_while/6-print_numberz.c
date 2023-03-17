#include <stdio.h>

/**
 * main - C program that prints numbers using putchar only
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
