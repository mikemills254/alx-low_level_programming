/*
 * File: 8-print_base16.c
 * Authour Mike Mills
 */

#include <stdio.h>
/**
 * main - Print hex followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
		putchar((i % 16) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar (letter);

	putchar ('\n');

	return (0);
}
