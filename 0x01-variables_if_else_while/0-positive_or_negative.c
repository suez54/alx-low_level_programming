#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 * Return:This returns a negative or positive number
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("\n");
}
return (0);
}
