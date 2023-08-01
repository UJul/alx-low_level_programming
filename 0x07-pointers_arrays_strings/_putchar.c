#include <unistd.h>

/**
 * _putchar - write the character C
 * @c: The character to print
 * Return: on success 1.
 * on error 1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
} 
