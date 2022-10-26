#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer.
 * @i: integer
 * Return: absvalue
 */

int _abs(int i)
{
	int a = i;
	int absvalue;

	if (a < 0)
	{
		a = a * (-1);
	}
	absvalue = a;

	return (absvalue);
}
