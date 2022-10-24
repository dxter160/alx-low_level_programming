#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int ten;
	char i;

	for (i = 'a'; i <= 'z', i++;)

	{

		for (ten = '0'; ten <= 10; ten++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
