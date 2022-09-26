#include <stdio.h>

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/
void print_chessboard(char (*a)[8])
{
int x, y;

x = 0;
for (; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
putchar(*(*(x + a) + y));
}
putchar('\n');
}
}
