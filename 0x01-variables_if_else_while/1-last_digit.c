#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * description: value of the numbers
 *
 * return: Always 0 (success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	printf("last digit of %d is %d and is", n, last);

	if (last > 5)
		printf("its greater than 5\n");
	else if (last == 0)
		printf("its 0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
