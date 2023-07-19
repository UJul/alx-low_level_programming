#include "chiamaka.h"

/**
 * print_aphabet - entry point of the program
 * The program print alphabet in low keys
 * Return: Always 0.
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
