#include <stdio.h>
#include "main.h"

/*
 * print_alphabet - prints all alphabets in lowercase
 * return on success 1
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	printf("Lowercase alphabets:\n");

	while (alphabet <= 'z')
	{
		printf("%c ", alphabet);
		alphabet++;
	}


	return (0);

}

