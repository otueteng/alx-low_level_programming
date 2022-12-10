#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* More headers goes there */

/**
 * main - Entry Point
 * Description - Prints IF random generated number is positive, zero or negative
 * Return : Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\", n);
	else if(n == 0)
		printf("%d is zero\", n);
	else
		printf("%d is positive\", n);
	return(0);
}
