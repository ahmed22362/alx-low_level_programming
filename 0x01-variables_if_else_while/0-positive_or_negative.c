#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*Main: start point 
 * generate random number n 
 * check what n is
 * return 0 : always true*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) printf("%d is positive\n", n);
	else if (n == 0) printf("%d is zero\n", n);
	else printf("%dis negative\n", n);
	return (0);
}

