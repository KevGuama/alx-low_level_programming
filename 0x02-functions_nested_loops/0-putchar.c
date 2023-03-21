#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print _putchar
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
