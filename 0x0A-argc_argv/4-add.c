#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: argument numbers
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int j, count, len, i;

if ((argc + 1) == 0)
{
printf("%d", 0);
}
else
{
count = 0;
for (j = 1; j < argc; j++)
{
len = strlen(argv[j]);
for (i = 0; i < len; i++)
{
if (isdigit(*(argv[j] + i)) == 0)
{
printf("Error\n");
return (1);
}
}
count += atoi(argv[j]);
}
printf("%d\n", count);
}
return (0);
}
