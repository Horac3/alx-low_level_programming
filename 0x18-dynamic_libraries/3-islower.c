#include "main.h"
/**
* _islower - checks if  the char is lowercase or not
* @c: is the char to be checked by the function
* Return: 1 if char is lowercase, else 0.
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

