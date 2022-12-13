#include "main.h"
/**
 * print_alphabeth - print the lower case alphabeth
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

