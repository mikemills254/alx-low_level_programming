/*
 * File: 7-print_tebahpla.c
 * Author Mike Mills
 */

#include <stdio.h>
/**
 * main - Print alphabets in lowercase in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar ('\n');

	return (0);
}
