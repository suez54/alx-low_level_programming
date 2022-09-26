#include <stdio.h>

/**
 * *_strstr - locate a substring
 * @haystack: string to perform search on
 * @needle: substring derived from search on @haystack
 * Return: Pointer to the beginning of the located substring |
 * NULL if substring not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *result = haystack, *index = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (result);
}
needle = index;
result++;
haystack = result;
}
return (0);
}
