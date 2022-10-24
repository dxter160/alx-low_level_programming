#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _islower - checks for lowercase character.
 * @c: character to check if is lowercase
 * Return: 1 if c is lowercase,0 - if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}










