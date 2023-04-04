#include "main.h"

/**
 * _strspn - the entry point
 * @s: input
 * @accept: input
 * Return: a;ways 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
		{

			for (n = 0; accept[n] != '\0'; n++)
			{
				if (accept[n] == s[i])
				{
					value++;
					break;
				}
			}
			if (accept[n] == '\0')
			{
				/*End of the accept string reached*/
				break;
			}

		}

		return value;
}
