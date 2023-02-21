#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Description: A functin print the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
