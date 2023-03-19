#include <stdio.h>
/**
 * main - Print numbers from 0 to 9.
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = '0'; d < '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
