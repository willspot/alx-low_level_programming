#include "main.h"

/**
 * print_line - draw straight lines
 * @n: number of times
 *
 * Return: 0
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
