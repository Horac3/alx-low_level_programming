#include <stdio.h>

/**
 * main -all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 10; j++)
{
printf("%d%d ", i, j);
}
}
putchar('\n');
return (0);
}