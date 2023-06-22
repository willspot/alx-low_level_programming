#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: characters to check
 *
 * Return: 1 or 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
