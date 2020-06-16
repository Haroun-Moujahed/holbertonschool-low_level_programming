#include "holberton.h"

/**
 * print_last_digit - Returns the value of the last digit
 * @n: integer to get the last digit out of
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n % 10 >= 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		_putchar(-(n % 10) + '0');
		return (-(n % 10));
	}
}
