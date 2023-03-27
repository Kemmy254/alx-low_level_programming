#include "main.h"
#include <stdio.h>

/**
 * print _array - prints n element of an array
 * @a: parameter  array
 * @n: number to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(",");
	}
	printf("\n");
}
