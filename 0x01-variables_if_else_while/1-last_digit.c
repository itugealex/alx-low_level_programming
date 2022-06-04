#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int m;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	}else if((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater thatn 5", n, m);
	}else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}
	return (0);
}
