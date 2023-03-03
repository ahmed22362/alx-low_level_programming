#include "main.h"

/**
*_strncpy - copy src into dest.
*
*@dest: String the destination word.
*@src: String the source word.
*@n: int the number of char to copy.
*
*Return: String the dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
