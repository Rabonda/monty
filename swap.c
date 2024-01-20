#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: The first interger value
 * @b: The second integer value
 * void: swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
