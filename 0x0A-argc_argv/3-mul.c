#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: argument counter
  * @argv: pointer to array
  * Return: 0 on success, 1 if two argument not given
  */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
