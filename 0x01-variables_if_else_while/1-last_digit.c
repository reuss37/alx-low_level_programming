#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print value of n:
 *
 *
 * return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit = n % 10;

	if (digit > 5)
		printf("last digit of %i and greater than 5\n", digit);
	else if (digit == 0)
		printf("last digit of %i and is 0\n", digit);
	else if (digit < 6 && digit != 0)
		printf("last digit of %i is %i and less than 6 and not 0\n", n, digit);

	return (0);
}
