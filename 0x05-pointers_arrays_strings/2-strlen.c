#include "main.h"

/**
 * _strlen - return length of string
 *
 * @s: string input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
