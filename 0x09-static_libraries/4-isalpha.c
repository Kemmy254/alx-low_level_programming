#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to be checked
 *
 * Return: Returns 1 if the character is an alphabetic character (uppercase
 *         or lowercase), and 0 otherwise.
 */

int _isalpha(int c)
{

	return (isalpha(c));

}
