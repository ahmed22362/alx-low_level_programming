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
	int last_d = n % 10;

	_putchar('0'+last_d);
	return (0);
}
