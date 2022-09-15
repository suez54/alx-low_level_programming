#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * @i: variable one
 * Return: Always 0.
 */
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
putchar('0' + i);
i++;
}
putchar('\n');
}
