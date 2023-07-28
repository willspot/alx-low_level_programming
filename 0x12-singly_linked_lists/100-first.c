#include <stdio.h>

/**
 * main_constructor - A constructor function that prints a message
 * before main runs
 * Return: NULL
 */
void main_constructor(void) __attribute__((constructor));
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
