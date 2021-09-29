#include "main.h"

/**
 * print_chessboard - prints the chessboard(8 by 8)
 * @a:poiner to the chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[a][b] + '0');
		}
		_putchar('\n');
	}
}


