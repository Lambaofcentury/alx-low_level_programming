#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main  - main function
 *
 * Return - Can be zero
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is greater than 5", n);
	else if (m == 0)
		printf("last digit of %d is 0", n);
	else if (m < 6 && m != 0)
		printf("last digit of %d is less than 6 and not 0", n);
	printf("\n");


	return (0);
}

