#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @x: The number to be checked
 * Return: 1 for a digit character and 0 otherwise
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
