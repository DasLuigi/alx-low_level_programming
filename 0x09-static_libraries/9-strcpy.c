#include "main.h"

/**
 * _strcpy - this copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @src: source
 * @dest: destination
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
