#include "main.h"

/**
 * check_prime - returns 0 or 1.
 * @i: input number.
 * @p: possible factor of number.
 * Return: 0 if not, 1 if prime.
 */

int check_prime(int i, int p)
{
	if (p < i)
	{
		if (i % p == 0)
		{
			return (0);
		}
		else
		{
			return (check_prime(i, p + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - detect if number is a prime number or not.
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}
