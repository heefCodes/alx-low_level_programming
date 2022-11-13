#include <stdio.h>

/**
  * main - program to prints the nunber of argument passed into it
  * @argc: argument counter
  * @argv: pointer to an array
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
	{
		printf("argc = %d\n", argc - 1);
	}
	return (0);
}
