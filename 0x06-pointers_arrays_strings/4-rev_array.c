/*
 * File: 4-rev_array.c
 *
 * Author: Mike Mills
 */
#include "main.h"
/**
 * reverse_array - reverses contents of an array of intergers
 *
 * @a: An array of integers
 * @n: The number of elements to swap
 *
 * Returns void
 */
void reverse_array(int *a, int n)
{
	int i = 0, k;

	n = n - 1;
	while (i < n)
	{
		k = *(a + i);
		*(a + i) = *(n + a);
		*(n + a) = k;
		k++;
		i--;
	}
}
