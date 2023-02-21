#include "main.h"
/**
 * print_alphabet_x10: print the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int x = 0;

	while (x < 10)
	{
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}
