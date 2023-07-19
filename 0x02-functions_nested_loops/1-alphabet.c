#include "main.h"

/**
  *main - entry point of the program 
  *
  *Return: Always.
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
