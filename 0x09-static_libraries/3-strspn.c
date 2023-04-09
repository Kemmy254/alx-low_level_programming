#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - Calculates the length (in bytes) of the initial segment of s which
 *           consists entirely of bytes from accept.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing the characters to match.
 *
 * Return: Returns the length (in bytes) of the initial segment of s which
 *         consists entirely of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{

	return (strspn(s, accept));

}
