#include "main.h"
/**
 * print_to_98 - print the nubers from n to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i <= 9)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar((i % 10) + 48);
			_putchar((i / 10) + 48);
		}
		_putchar(44);
		_putchar(32);
	}
}
