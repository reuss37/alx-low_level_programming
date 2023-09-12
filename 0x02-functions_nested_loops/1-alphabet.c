#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - use _putchar to print alphabet from  a to z in lower case
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
