#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: most number of bytes from @src
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int i;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';

	return (dest);
}
