#include "holberton.h"

/**
 * _isdigit - checks if an character is a digit
 * @c: character to check
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
