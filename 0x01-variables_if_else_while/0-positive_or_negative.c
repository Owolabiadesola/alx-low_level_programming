#include <stdlib.h>
#include <time.h>
/* header goes here */
#include <stdio.h>
/* betty style doc for function man goes there */

/**
 * main - the main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
	printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else 
		printf("%d is negative", n);
	printf("\n")
	return (0);
}
