#include "main.h"

/**
 * _strncpy -  function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_backup = dest;

	while (*src != '\0' && src < n)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_backup);
}

