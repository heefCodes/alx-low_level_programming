#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 * Return: 0123456789
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
