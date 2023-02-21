#include "main.h"
/**
 * print_last_digit - get the last digit of given number
 *
 * @n: input number as an integer
 *
 * Return: the last digit of number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		{
		_putchar(-l + 48);
	return (-l);
		}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
