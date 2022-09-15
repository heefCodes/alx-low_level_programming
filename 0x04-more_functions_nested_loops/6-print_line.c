#include "main.h"

/**
 *print_line - function to print straight line
 *@n: n times
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
