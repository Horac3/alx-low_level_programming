#include <stdio.h>
/**
* main - Lists all the natural numbers
*        that are multiples of 3 or 5 using loops and logical operators.
*        using loops and logical operators
* Return: Always 0.
*/
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}

