#include "main.h"

int _sqrt(int n, int x);
/**
 * _sqrt_recursion - main fun
 * @n: int n
 * Return: sqr n
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - sq root recursion
 * @n: integer paramtr
 * @x: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int x)
{
if (n < 0)
return (-1);
if (x * x == n)
return (x);
if ((x * x) > n)
return (-1);
return (_sqrt(n, x + 1));
}
