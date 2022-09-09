#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int z;

for (i = 97; i <= 122; i++)
putchar(i);
for (z = 65; z <= 90; z++)
putchar(z);
putchar('\n');
return (0);
}
