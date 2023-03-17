#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - C program that prints the last digit on a given number
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = abs(n) % 10;
printf("The last digit of %d is %d\n", n, last_digit);
return (0);
}
