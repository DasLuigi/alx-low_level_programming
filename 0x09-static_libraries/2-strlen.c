#include "main.h"

/**
 * _strlen - this returns the length of a string
 * @s: input string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
