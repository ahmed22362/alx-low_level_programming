#include "main.h"

/**
 * jack_bauer - print every minit in the day
 *
 * Return: alwys 0
 */
void jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;
	
		while (m < 60)
		{
			_putchar('0' + h);
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + m);
			_putchar('0' + m);
			m++;
		}
		h++;
	}
	return (0);
}
