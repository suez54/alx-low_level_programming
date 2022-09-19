#include <stdio.h>

/**
 * print_array - print array
 * @a: var for array
 * @n: var for printing value number
 * Return: none
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf(" %d", a[x]);
if (x != n - 1)
printf(",");
}
printf("\n");
}
