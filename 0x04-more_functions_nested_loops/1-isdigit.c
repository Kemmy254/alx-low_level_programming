#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 * Return: 1 for digit character or 0 for anythig else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
