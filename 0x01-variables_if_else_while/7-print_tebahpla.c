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
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');
	return (0);
}
