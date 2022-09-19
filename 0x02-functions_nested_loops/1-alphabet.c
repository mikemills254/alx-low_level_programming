/*
 * File: 1-alphabet.c
 * Author Mike Mills
 */
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabets in lower case
 *
 * Return Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
