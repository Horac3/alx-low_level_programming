#include <stdio.h>
#include <unistd.h>

/**
 * main - C program that prints the without printf or puts
 * Return: Always 0 (Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 12);
return (1);
}

