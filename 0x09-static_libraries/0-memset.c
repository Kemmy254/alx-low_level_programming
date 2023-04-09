#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - Sets the first n bytes of the memory area pointed .
 * @s: A pointer to the memory area to be set.
 * @b: The value to be set.
 * @n: The number of bytes to be set to the value.
 *
 * Return: Returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{

	return (memset(s, b, n));

}
