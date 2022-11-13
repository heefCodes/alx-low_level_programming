#include <stdio.h>
/**
  * main - program to print its name
  * @argc: argument counter
  * @argv: pointer to an array string
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);

}
