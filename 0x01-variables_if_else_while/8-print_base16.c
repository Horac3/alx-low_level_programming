#include <stdio.h>

/**
 * main - C program that prints hexadecimal values
 * Return: Always 0 (Success)
 */

int main(void)
{
const char *hex_digits = "0123456789abcdef";
for (int i = 0; i < 16; i++)
{
putchar(hex_digits[i]);
}
putchar('\n');
return (0);
}
