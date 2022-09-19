/*
 * File: 2-strlen.c
 *
 * Auth: Mike Mills
 */
#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - Prints the length of a string
 * @s: The string to be measured length
 * Return: The length of @str.
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
