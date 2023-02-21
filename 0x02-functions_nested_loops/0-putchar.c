#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program pring _putchar useing putchar method
 *
 * Return: 0 Always true
 * */
int main(void)
{
	char m[10] = "_putchar";
	for (int i = 0; i < 8; i++)
	{
		_putchar(m[i]);
	}
	_putchar('\n');
	return (0);
}
