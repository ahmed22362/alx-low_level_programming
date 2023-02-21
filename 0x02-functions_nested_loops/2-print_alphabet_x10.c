#include "main.h"
/**
 * print_alphabet_x10 - the wanted function
 *
 * Description: print the alphabet 10 times
 * 
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{	int a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}
