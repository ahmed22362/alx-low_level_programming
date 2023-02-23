#include "main.h"
/**
* _isupper - check the entered character is upper or not
*
* @c: the wanted to check character
*
* Return: 1 if the character ir upper; 0 otherwitse
*/

int _isupper(char c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
