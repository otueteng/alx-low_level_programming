#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;
	char low;

	for (s = '0'; s <= '9'; s++)
		putchar(s);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
