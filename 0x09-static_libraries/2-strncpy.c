#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - Copies a specified char to destination
 * @dest: The destination buffer
 * @src: The source string to be copied
 * @n: The maximum number of characters to be copied
 *
 * Return: Returns a pointer to the destination buffer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
