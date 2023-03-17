#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - C program that prints with last digit of an int
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = abs(n) % 10;
printf("Last digit of %d is %d and is\n", n, last_digit);
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
