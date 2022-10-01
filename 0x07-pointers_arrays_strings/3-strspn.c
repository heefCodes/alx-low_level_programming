#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: the string to search
 * @accept: target
 * Return: number of bytes consecutively matched
 */

unsigned in _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				matches++;
				break;
			}
			if (*(accept + J + 1) == '\0' && *(s + i) != *(accpet + j))
				return (matches);
		}
		i++;
	}
	return (matches);
}
