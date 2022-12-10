#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* More header goes there */

/**
 * main - Entry Point
 * Description - Prints IF random generated number is +tive, zero or -tive
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
