#include "main.h"

/**
 * _strncpy - A function that copy string
 *
 * @dest: pointer to destination
 * @strc: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through arc array
	 * where if there is no arc array
	 * among first n bytes of source
	 * string will not be null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	 * if length of source less than n
	 * write additional bytes to dest
	 * to ensure total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
