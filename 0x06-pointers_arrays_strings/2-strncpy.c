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
	int i = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}

	return (dest);
}
