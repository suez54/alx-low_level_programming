#include<stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @a:The number
 * Return: the last didgin of the number
 */
int print_last_digit(int a)
{
a = a % 10;
if (a < 0)
{
a = -a;
putchar(48 + a);
return (0);
}
