#include <unistd.h>

 /**
 *  _putchar - writes the character c to stdout
 *  Return: on success 1.
 *  on erroe, -1 is returned, and the errno is set appropriately.
 */
 int _putchar(char c)
 {
         return (write(1, &c,1));
}
