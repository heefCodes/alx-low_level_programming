#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * strtow - concatenates arguments
 * @str: string to be splitted
 * Return: a pointer to array of string
 */

char **strtow(char *str)
{
	char *arra = NULL;
	unsigned int i = 0, j = 0, k;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	arra = malloc((i + j + 1) * sizeof(char));
	if (arra == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		arra[k] = str[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		arra[i] = str[k];
		i++;
	}
	arra[i] = '\0';
	return (NULL);
}
