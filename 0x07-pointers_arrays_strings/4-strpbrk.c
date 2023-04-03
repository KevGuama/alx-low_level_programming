#include "main.h"

/**
 * _strpbrk - look up a string for each set of bytes.
 * @s: 1st string.
 * @accept: 2nd string.
 * Return: a pointer to the byte in s that matches one of the
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0';)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
