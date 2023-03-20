#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int p, q;

	for (p = '0'; p < '9'; p++)
	{
		for (q = p + 1; q <= '9'; q++)
		{
			if (q != p)
			{
				putchar(p);
				putchar(q);
				if (p == '8' && q == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
