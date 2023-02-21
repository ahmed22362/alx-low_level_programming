#include "main.h"

/**
 * _islower - check if the input is lower case charachter
 *
 * @c: the character in ASCII code
 *
 * Return: 1 if the c is lower. 0 if c is not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
