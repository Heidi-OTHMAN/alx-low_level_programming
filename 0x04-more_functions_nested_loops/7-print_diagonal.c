#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 * should be printed
*/

void print_diagonal(int n)
{
	int pos tn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos tn = 1; pos tn <= n; pos tn++)
		{
			for (space = 1; space <= pos tn; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
