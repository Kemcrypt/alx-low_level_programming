#include "main.h"

/**
 * print_alphabeth - Entry point
 *
 * Return: 0
 */

void print_alphabeth(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

