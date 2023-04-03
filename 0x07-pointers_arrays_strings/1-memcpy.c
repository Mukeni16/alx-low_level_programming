#include "main.h"
/**
 **_memcpy - copies @n bytes from the memory area pointed to by
 *	@src into that pointed by @dest
 *@dest: pointer to the memory area
 *@src: source buffer to copy characters from
 *@n: number of bytes to copy from @src
 *
 *Return: pointer to the destination @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
