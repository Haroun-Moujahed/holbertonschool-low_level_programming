#include "holberton.h"

/**
 * print_alphabet - display the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
