#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing the characters to match.
 *
 * Return: Returns a pointer to the first occurrence in s,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{

	return (strpbrk(s, accept));

}
