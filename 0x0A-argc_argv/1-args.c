#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	printf("Number of arguments: %d\n", argc - 1);

	for (i = 1; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return (0);
}
