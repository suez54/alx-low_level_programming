#include<stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int a;

for (a = 97; a < 122; a++)
{
putchar(a);
}
putchar('\n');
}
