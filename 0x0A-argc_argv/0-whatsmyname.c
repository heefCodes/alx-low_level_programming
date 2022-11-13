#include <stdio.h>
/**
  * main - program to print its name
  * @argc: argument counter
  * @argv: pointer to an array string
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);

}
