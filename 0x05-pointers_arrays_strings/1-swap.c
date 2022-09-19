/*
 * File: 1-swap.c
 *
 * Auth: Mike Mills
 */
#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers
 * @a - The first value to be swapped
 * @b - The second value to be swapped
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a  = *b;
	*b = t;
}
