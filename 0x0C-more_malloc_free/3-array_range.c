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
	if (min > max) 
		return (NULL);

	block = calloc(max - min, sizeof (*block));
	if (block == NULL)
		return (NULL);

	return (block);
}

