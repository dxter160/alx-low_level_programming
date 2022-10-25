#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 * return void
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
