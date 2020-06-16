#include "holberton.h"

/**
 * times_table - Returns the times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 1; j <= 9; j++)
			if (i * j < 10)
			{
				_putchar(i * j + '0');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((i * j) / 10);
				_putchar((i * j) % 10);
				_putchar(' ');
			}
}
