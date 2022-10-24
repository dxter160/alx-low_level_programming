#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * Return: always on success 1
 */

void print_alphabet_x10(void)
{
	char i, ten;

	for (i = 'a'; i <= 'z', i++;)

	{

		for (ten = '0'; ten <= 10; ten++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
