#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the substring or NULL if the substrd
 */
char *_strstr(char *haystack, char *needle)
{

	return (strstr(haystack, needle));

}
