#include "main.h"

/**
 * _strcmp - compares two strings
 * @sl: first string to compare
 * @s2: second string to compare
 *
 * Description: this function compares two strings s1 and s2
 * and return 0 if strings are equal, and negative value
 * if s1 < s2 or positive value if s1 > s2
 *
 * Return: 1 if true, 0 if false
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;

		}
		s1++;
		s2++;
	}
	return (equal);
}
