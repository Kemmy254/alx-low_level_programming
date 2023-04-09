#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - Locates the first occurrence of the char the string s.
 * @s: A pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Return: Returns a pointer to the first occurrence of the char,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{

	return (strchr(s, c));

}
