#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *@c: checks input of function
 * Return: 1 if c is a letter, lowercase or uppercase
 *        otherwise returns 0
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	return (0);
}
