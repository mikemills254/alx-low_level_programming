/*
 * File: 6-puts2.c
 *
 * Auth: mike mills
 */
#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - prints every character of a string followes by a new line
 * @str: The string containing characters
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);

	putchar('\n');
}
