#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Concatenates a specified number of charact to another
 * @dest: The destination buffer
 * @src: The source string to be appended
 * @n: The maximum number of characters to be appended
 *
 * Return: Returns a pointer to the destination buffer.
 */
char *_strncat(char *dest, char *src, int n)
{

	return (strncat(dest, src, n));

}
