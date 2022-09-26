#include <stdio.h>

/**
 * *_strchr - locate character in string
 * @s: pointer to string
 * @c: character to locate
 * Return: Pointer to matched character |
 * NULL if character not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
