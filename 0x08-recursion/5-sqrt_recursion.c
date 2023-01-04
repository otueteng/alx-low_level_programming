#include "main.h"

/**
 * _check_sqrt - checks if sqrt of number exist.
 * @h: input number
 * @sqrt: Number to find sqrt of.
 * Return: square root or -1.
 */

int _check_sqrt(int h, int sqrt)
{
	if ((sqrt * sqrt) == h)
	{
		return (sqrt);
	}
	else
	{
		if ((sqrt * sqrt) > h)
			return (-1);
		else
			return (_check_sqrt(h, sqrt + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square of a number.
 * @n: number to find sqrt of.
 * Return: Natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_check_sqrt(n, 0));
}
