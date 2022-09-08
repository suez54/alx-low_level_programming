#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char typeChar;
	int typeInt;
	long long int llongInt;
	long int longInt;
	float typeFloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(typeChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(typeInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof((typeFloat));
	return (0);
}	
