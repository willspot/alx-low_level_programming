#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locate a character in a string
 *
 * @s: the string to check
 * @c: the character we are looking for
 *
 * Return: @c
 * @s. Return NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
