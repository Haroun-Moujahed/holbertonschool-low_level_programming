#include "holberton.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
