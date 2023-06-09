#include "main.h"
#include <stddef.h>
/**
 * _memcpy - function copies @n from memory area @src
 * to memory area @dest
 *
 * @n: function from memory area
 * @src: byte from memory area
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
