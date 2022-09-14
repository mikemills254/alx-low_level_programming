/*
 * File: 1-alphabet.c
 *
 * Author Mike Mills
 */
#include <stdio.h>
#include "main.h"
/**
 * main: Print alphabets followed by an line
 * Return Always 0
 */
int main(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	};
	putchar('\n');
}
