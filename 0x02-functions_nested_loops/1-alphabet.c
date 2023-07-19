#include "main.h"

/**
 * main - Function that prints the alphabet, in lowercase, in a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
