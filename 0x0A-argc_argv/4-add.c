#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
  * isnumber - check if it is a number
  * @n: argument passed
  * Return: number
  */

bool isnumber(char *n)
{
	int i = 0;

	for (i = 0; n[i]; i++)
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
  * main - adds positive numbers
  * @argc: argument counter
  * @argv: pointer to array string
  *
  * Return: 0 on success, 1 if an argument was not a number
  */

int main(int argc, char *argv[])
{
	int j = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (j < argc)
	{
		if (isnumber(argv[j]))
			sum += atoi(argv[j]);
		else
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	printf("%d\n", sum);

	return (0);

}
