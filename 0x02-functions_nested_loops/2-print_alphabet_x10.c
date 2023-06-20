#include "main.h"

/**
  * print the alphabet X10 - Make the alphabet X10 times
  *
  * Return: always 0
  */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
