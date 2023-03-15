#include<stdio.h>

/**
* main - Entry point print all argment passed to
*
*@argc: count of argument passed to
*@argv: vector of argument
*
*Return: 0 - success
*/

int main(int argc, char *argv[])
{
	int temp = argc;

	while (argc > 0)
	{
		printf("%s\n", argv[temp - argc]);
		argc--;
	}
	return (0);
}
