/*
 * File: 3-puts.c
 *
 * Auth: Mike Mills
 */
#include "holberton.h"
#include <stdio.h>
/**
 * _puts - Prints a string to stdout
 *
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
