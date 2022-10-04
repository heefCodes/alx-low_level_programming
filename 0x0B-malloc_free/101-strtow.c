#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * strtow - concatenate arguments
 * @str: string to be splitted
 * Return: a pointer to array of string
 */

char **strtow(char *str)
{
	char *arr = NULL;
	unsigned int i = 0, j = 0, k;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	arr = malloc((i + j + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		arr[k] = str[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		arra[i] = str[k];
		i++;
	}
	arr[i] = '\0';
	return (NULL);
}
