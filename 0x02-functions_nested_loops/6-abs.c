#include "main.h"
/**
 * _abs - give the absolute value of and integer
 *
 * @n: the given number to make it pos
 *
 * Return: return the absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
