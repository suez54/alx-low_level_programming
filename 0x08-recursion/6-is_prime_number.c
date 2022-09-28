#include <stdio.h>

int primes(int n, int y);
/**
 * is_prime_number - checks if its prime
 * @n:number to be checked
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
if ((!(n % 2) && n != 2) || n < 2)
{
return (0);
}
else
{
return (primes(3, n));
}
}

/**
 * primes - check number is prime?
 * @n: integer params
 * @y: integer params
 * Return: boolean
 */
int primes(int n, int y)
{
if (y % n == 0)
{
return (0);
}
else if (y / 2 > n)
{
return (primes(n + 2, y));
}
else
{
return (1);
}
}
