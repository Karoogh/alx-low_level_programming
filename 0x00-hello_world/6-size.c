#include <stdio.h>
/**
 * main - This program prints the size of various computer types
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int; %lu byte(s)\n", sizeof(int));
	printf("size of a long int %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int; %lu byte(s)\n", sizeof(long long int));
	printf("size of a float; %lu byte(s)", sizeof(float));
	return (0);
}
