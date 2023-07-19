#include "main.h"

/**
 * main - Program that writes a function that checks for lowercase character
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
