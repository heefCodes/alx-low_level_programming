#include "main.h"

/**
 * more_numbers - funtion to print 10 times the numbers, from 0 to 14
 * Return: 012345678911121314
 */

void more_numbers(void)
{
	int counter;
	int num;

	for (counter = 0; counter <= 10; counter++)
	{
		for (num = '0'; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar(counter);
	}
	_putchar('\n');
}
