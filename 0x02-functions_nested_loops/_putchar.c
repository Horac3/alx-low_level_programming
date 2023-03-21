#include "main.h"
#include <unistd.h>
/**
* C _putchar program - that writes the character c to stdout
* 
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

