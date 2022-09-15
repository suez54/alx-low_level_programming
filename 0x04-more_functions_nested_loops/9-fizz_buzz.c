#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
int i;
int a = 100;

for (i = 1; i <= a; i++)
{
if ((i % 3) == 0 && i % 5 != 0)
{
putchar(70);
putchar(105);
putchar(122);
putchar(122);
putchar(' ');
}
else if ((i % 5) == 0 && (i % 3) != 0)
{
putchar(66);
putchar(117);
putchar(122);
putchar(122);
putchar(' ');
}
else if ((i % 3) == 0 && (i % 5) == 0)
{
putchar(70);
putchar(105);
putchar(122);
putchar(122);
putchar(66);
putchar(117);
putchar(122);
putchar(122);
putchar(' ');
}
else
{
if (a > 9)
putchar((i / 10)  + '0');
putchar((i % 10)  + '0');
putchar(' ');
}
}
putchar('\n');
return (0);
}
