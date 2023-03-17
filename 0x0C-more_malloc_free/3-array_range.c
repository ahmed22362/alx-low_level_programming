#include "main.h"
/**
* array_range - Create array of integers
*
*@min: integer the start point
*@max: integer the end point
*
*Return: pinter to address to store
*/

int *array_range(int min, int max)
{
	int *block;
	int i, j = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			block[j] = i;
			j++;
		}
		return (block);
	}
	else
		return (NULL);

}
