#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a: pointer to pieces to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 4; j++)
		{
		_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
