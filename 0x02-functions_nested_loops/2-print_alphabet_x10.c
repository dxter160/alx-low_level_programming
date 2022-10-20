#include "main.h"

/*
 * print_alphabet - prints all alphabets in lowercase
 * return on success 1
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	_putchar("Lowercase alphabets:\n");

	while (alphabet <= 'z')
	{
		_putchar("%c ", alphabet);
		alphabet++
	}


	return (0);

}

