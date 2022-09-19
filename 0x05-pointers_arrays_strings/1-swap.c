#include <stdio.h>

/**
 * swap_int - swaps a nad b
 * @a: variable pointers
 * @b: bariable pointers
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
