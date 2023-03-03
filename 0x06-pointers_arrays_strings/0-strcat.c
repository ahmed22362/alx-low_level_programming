#include "main.h"

/**
* _strcat - concatenates two strings
*
*@dest: string the destance value
*@src: string the source value
*
* Return: pointer to the concatented string
*/
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
