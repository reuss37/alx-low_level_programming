#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet in lowercase
 *
 * Return: Always 0(success)
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
