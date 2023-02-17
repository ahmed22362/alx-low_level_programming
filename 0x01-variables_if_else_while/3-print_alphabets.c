#include <stdio.h>
/**
 * main - Entry point
 * Return: ayways 0 
 * */

int main(void)
{
	/*declare varibles*/ 
	char l_alpha;
	char u_alpha;

	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
		putchar(l_alpha);
	for (u_alpha = 'A'; u_alpha <= 'Z'; u_alpha++)
		putchar(u_alpha);
	putchar('\n');
	return (0);
}
