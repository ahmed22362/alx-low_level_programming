#include "main.h"
/**
 * _isalpha - check if the given char in ASCII is alphabet or not
 *
 * @c: the character in ASCII code
 *
 * Return: 1 if c is alphabet lower or uppper. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
