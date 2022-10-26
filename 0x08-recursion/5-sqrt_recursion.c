#include "main.h"
/**
* root - square root of a number
* @n: n
* @rut: test the root
* Return: natural square root
*/

int root(int n, int rut)
{
	if (rut * rut > n)
		return (-1);

	if (rut * rut == n)
		return (rut);

	return (root(n, rut + 1));
}
/**
* _sqrt_recursion - square root of n, starting from the smallest possible, 0
* @n: n
* Return: natural square root, or -1 if not natural root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root(n, 0));
}
