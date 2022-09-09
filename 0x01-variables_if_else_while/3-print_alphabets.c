/*
 * File: 3-prints_alphabets.c
 * Author: Mike Mills
 */

#include <stdio.h>

/**
 * main - Prints alphabets in lower case then in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for(letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
