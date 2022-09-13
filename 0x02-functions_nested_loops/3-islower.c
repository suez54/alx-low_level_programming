#include<stdio.h>

/**
 * _islower - checks if ots lower case
 * @c:  char entered
 * Return: 1 if lower 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
