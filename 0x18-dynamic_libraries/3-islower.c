#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checls if a character is lowercase
 * @c: the integer value it receives
 *
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
