#include "main.h"

/**
 * main - Program that prints a function _islower that checks for lowercase character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
