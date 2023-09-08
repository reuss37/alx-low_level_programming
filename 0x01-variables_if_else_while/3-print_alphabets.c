#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: upper then lower
 *
 * Return: Always 0(success)
*/

int main(void)
{
	int n = 97;
	int k = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (k <= 90)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
