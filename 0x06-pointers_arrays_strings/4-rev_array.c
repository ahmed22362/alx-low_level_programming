#include "main.h"

/**
*reverse_array - reverce an array.
*
*@a: array
*@n: int the length of array.
*
*Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[j] = a[i];
		a[i] = temp;
		j--;
	}
}
