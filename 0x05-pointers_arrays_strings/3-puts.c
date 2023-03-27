#include <stdio.h>

/**
 * prints_a_string - function that prints a string, followed by a new line
 * @str: the string to be printed
 * Return: 0 always
 */

void _puts(char *str)
{

	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

	printf("Greeting message: %s\n", greeting);
}
