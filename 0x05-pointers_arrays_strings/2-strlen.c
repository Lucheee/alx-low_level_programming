#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get the len
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char *str;
	int len;

	str = "My first string!";
	len = _strlen(str);
	return (len);
}
