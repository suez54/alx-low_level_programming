#include<stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @a:The number
 * Return: the last didgin of the number
 */
int print_last_digit(int a)
{
putchar(a % 10 + 48);
return (a % 10+ 48);
}
