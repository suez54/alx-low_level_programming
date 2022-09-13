#include<stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Should return 0
 */
void print_alphabet_x10(void)
{
int a;
int j;

for (j = 0; j < 10; j++)
{
for (a = 97; a <= 122; a++)
{
putchar(a);
}
putchar('\n');
}
}
