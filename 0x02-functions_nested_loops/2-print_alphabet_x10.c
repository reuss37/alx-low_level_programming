#include "main.h"

/**
 * print_alphabet_x10 - function that will print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int line;
	int ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}