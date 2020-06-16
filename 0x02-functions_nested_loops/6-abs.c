#include "holberton.h"

/**
 * _abs - returns the absolute value of an integer
 * @n: integer to check
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
