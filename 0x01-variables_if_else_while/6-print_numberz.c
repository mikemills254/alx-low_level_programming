/*
 * File: 6-print_numberz.c
 * Author Mike Mills
 */

#include <stdio.h>
/**
 * main - Prints single digit numbers of base including 0
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');

	return (0);
}
