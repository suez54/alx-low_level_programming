#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 * @s var 
 * Return: none.
 */
void rev_string(char *s)
{
int len = strlen(s);
int mid = len/2;
int temp;
int i;
for (i = 0; i < mid; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len -i - 1] = temp;
}
}
