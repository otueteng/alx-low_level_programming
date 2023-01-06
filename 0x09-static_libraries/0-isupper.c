#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: parameter
 * Return: give 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
