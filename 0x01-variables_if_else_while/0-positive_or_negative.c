#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This is a mainfunction
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%dis positive\n", n);
	else if (n == 0)
		printf("%dis zero\n", n);
	else
		printf("%dis negative\n", n);
	return (0);
}