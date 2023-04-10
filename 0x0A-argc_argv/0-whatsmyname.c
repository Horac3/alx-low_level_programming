#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	char *program_name;

	if (argc > 0)
	{
		program_name = argv[0];
		printf("%s\n", program_name);
	}

	return (0);
}
