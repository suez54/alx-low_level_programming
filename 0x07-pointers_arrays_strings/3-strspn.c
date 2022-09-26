#include <stdio.h>

/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0;
int count;

while (*s)
{
for (count = 0; accept[count]; count++)
{
if (*s == accept[count])
{
x++;
break;
}
else if (accept[count + 1] == '\0')
return (x);
}
s++;
}
return (x);
}
