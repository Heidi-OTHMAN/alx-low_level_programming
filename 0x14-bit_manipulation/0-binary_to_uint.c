#include "main.h"

/**
 * binary_to_unit - converts a binary number string to unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int form of b, or 0 if error
*/
unsigned int binary_to_unit(const char *b)
{
	int a;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
