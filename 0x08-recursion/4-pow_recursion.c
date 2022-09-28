#include <stdio.h>

/**
 * _pow_recursion - evaluate int raised to power
 * @x: int
 * @y: factorial number raised to x
 * Return: power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return(1);
}
return (x * _pow_recursion(x, y - 1));
}
