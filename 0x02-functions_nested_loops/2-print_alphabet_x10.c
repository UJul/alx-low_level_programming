#include "main.h"

/**
 * main -  The Program prints 10 times the alphabet.
 * In lowercase, followed by a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void);

{
	int a;
	char b;
	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		}
}
