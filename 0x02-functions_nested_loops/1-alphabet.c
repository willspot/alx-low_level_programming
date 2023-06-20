#include "main.h"

/**
  * print_alphabet - create the alphabet
  *
  * Return: alaways 0
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
