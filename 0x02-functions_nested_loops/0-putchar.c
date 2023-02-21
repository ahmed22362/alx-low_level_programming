#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program pring _putchar useing putchar method
 *
 * Return: 0 Always true
 */

int main(void)
{
	char m[10] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(m[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
