#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	/*declaring variables*/
	char l_alpha;
	/*for loops*/
	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
		if (l_alpha == 'e'|| l_alpha  == 'q')
			continue;
		putchar(l_alpha);

	putchar('\n');
	return (0);
}
