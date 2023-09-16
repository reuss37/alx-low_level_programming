#include "main.h"

/**
 * print_square - print a square using character #
 *
 * @size: is size of square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return (0);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar('3');
		}
		_putchar('\n');
	}
}

