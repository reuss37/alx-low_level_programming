#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: lower then upper too minus
 *
 * Return: Always 0(success)
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
