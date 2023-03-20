#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the character to be checked
 *
 * Description: checks for alphabetic character
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
