#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer string
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return (length);
}
