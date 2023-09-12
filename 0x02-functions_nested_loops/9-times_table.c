#include "main.h"

/**
 * times_table - print the 9 times table
 *
*/

void times_table(void)
{
	int num = 9;
	int i;

	for (i = 1; i <= 10; i++)
	int product = num * i;

	if (product < 10)
	{
		_putchar('0' + product);
	}
	else
	{
		_putchar('0' + product / 10);
		_putchar('0' + product % 10);
	}
}
