#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1
 * On erroe, -1 is returns, and errno is set appropriately
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
