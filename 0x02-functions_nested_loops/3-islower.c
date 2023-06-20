#include "main.h"

/**
  * _islower - to check for lowercase character
  * @c: character to be checked
  *
  * Return:  0 for anything else, 1 for lowercase character
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
