/*
 * File: 5-print_numbers.c
 * Author Mike Mills
 */

#include <stdio.h>
/**
 * main - Print numbers of base 10 including 0
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	return (0);
}
