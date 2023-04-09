#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: Returns 1 if the character is lowercase, and 0 otherwise.
 */
int _islower(int c)
{

	return (c >= 'a' && c <= 'z');

}
