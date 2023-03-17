#include "main.h"

/**
* string_nconcat - concate the first string by n from seconde string
*
*@s1: pointer to the first string
*@s2: pointer to the second string
*@n: numbers of added characer from s2
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int index, len = n;
	char *both;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	both = malloc(len + 1);
	if (both == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		both[len++] = s1[index];
	for (index = 0; s2[index]; index++)
		both[len++] = s2[index];

	both[len] = '\0';
	return (both);
}
