#include "holberton.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: First input value to swap
 * @b: Second input value to swap
 *
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}