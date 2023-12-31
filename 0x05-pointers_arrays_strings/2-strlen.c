#include <stddef.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
