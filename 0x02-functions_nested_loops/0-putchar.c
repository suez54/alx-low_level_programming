#include <stdio.h>

/**
 * main - prints _putchar followed by new line
 * Return: Should return 0
 */
int main(void)
{
char ch[] = "_putchar";
int j = 50;
int x;

for (x = 0; x < j; x++)
{
if (ch[x] == '\0')
{
putchar('\n');
break;
}
else
{
putchar(ch[x]);
}
}
return (0);
}
