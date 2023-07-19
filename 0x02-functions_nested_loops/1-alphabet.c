#include "main.h"

/**
 * main - Program that prints_alphabet in lowercase, in a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
