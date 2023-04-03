#include "main.h"
/**
 *_strchr - locates a charracter in a string
 *@s: string to be searched
 *@c: the character to be located
 *
 *Return: if c is found - return a pointer to the first occurrence
 *if c is not found - return NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
