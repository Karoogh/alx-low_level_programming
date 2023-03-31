#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: destination of string pointer
 * @src: source of string pointer
 * @n: number of bytes to be used
 * Return: pointer to dsetination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n_of_bytes;

	for (n_of_bytes = 0; n_of_bytes < n && src[n_of_bytes] != '\0'; n_of_bytes++)
		dest[n_of_bytes] = src[n_of_bytes];

	for (; n_of_bytes < n; n_of_bytes++)
		dest[n_of_bytes] = '\0';

	return (dest);
}
