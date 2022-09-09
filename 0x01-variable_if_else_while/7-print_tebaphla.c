#include <stdio.h>

/**
 * main - print lower alphabet in reverse order
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
