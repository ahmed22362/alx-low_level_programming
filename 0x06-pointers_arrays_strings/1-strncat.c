#include "main.h"

/**
*_strncat - concatinate 2 strings to n.
*
*@dest: first string the distinct one,
*@src: the second string to add to.
*@n: integer the number of char to add.
*
*Return: String.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
	return (dest);
}
