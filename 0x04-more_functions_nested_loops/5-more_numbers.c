#include "main.h"

/**
 * more_numbers - funtion to print 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int counter;
	char num;

	for (counter = 1; counter <= 10; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 > 0)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');

		}
		_putchar('\n');
	}
}
