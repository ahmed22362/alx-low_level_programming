#include "main.h"

/**
* malloc_checked - allocated memory
*
*@b: size of memeory block
*
*Return: pointer to the address
*/

void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
	{
		exit(98);
	}
	return (block);
}
