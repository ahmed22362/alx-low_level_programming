#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point: return the result of multyply two numbers
*
*@argc: count to passed argument
*@argv: vector of tha passed argument
*
*Return : 0 - incase of success 1 - incasse of error
**/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[2]) * atoi(argv[3]));
	return (0);
}
