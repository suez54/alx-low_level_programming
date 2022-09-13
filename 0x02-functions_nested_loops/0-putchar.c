#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 */
int main(void)
{
char ch[]="_putchar";
int j=50;
int x;

for (x=0;x<j;x++)
{
if(ch[x] == '\0')
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
