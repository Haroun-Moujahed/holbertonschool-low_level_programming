#include "holberton.h"

/**
 * jack_bauer - displays the the 24 hours of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h1, h2, m, s;

	for (h1 = 0; h1 <= 2; h1++)
		if (h1 == 2)
			for (h2 = 0; h2 <= 3; h2++)
				for (m = 0; m <= 5; m++)
					for (s = 0; s <= 9; s++)
					{
						_putchar (h1 + '0');
						_putchar (h2 + '0');
						_putchar (':');
						_putchar (m + '0');
						_putchar (s + '0');
						_putchar ('\n');
					}
		else
			for (h2 = 0; h2 <= 9; h2++)
				for (m = 0; m <= 5; m++)
					for (s = 0; s <= 9; s++)
					{
						_putchar (h1 + '0');
						_putchar (h2 + '0');
						_putchar (':');
						_putchar (m + '0');
						_putchar (s + '0');
						_putchar ('\n');
					}
}
