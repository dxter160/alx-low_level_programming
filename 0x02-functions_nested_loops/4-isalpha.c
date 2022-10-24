#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check if letter,lowercase or uppercase
 * Return: (1) if c is alphabet, (0) - if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
