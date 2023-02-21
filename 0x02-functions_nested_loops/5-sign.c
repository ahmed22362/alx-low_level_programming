#include "main.h"
/**
 * print_sign - Print the sign of a given number and print the sign of it
 *
 * @n: The given number
 *
 * Return: 1 if n is bigger than 0, 0 if n equals to 0
 * and -1 if n is smaller than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
