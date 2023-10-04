#include "main.h"

/**
 *_abs - function that computes absolute value of integer
 *
 * @n: takes an integer type input for function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
