#include "main.h"

/**
 * _islower - function to print lowercase
 *
 * @c: parameter to printed
 *
 * Return: 1 if it is a lower case
 * ad 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
