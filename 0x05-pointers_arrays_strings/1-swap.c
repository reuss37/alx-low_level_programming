#include "main.h"

/**
 * swap_int - swap value of two integers using two input parameters
 *
 * @a: parameter input 1
 * @b: parameter input 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
