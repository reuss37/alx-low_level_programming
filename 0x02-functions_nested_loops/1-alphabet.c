#include "main.h"

/**
 * main - Entry point
 *
 * Description: use _putchar to print alphabet a-z
 *
 * Return: Always 0 (success)
*/
// print alphabet in lower case
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
