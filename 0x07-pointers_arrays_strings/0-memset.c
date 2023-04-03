#include "main.h"
/**
 **_memset - fills the first n bytes of the memory area
 *	pointed to by @s with the constant byte @c
 *@s: pointer to the memory area
 *@b: character to fill the memory area
 *@n: number of bytes to be filled
 *description _memset: over there
 * Return: pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
