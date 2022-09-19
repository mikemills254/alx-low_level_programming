/*
 * File reset_to_98.c
 * Author Mike Mills
 */ 

#include "main.h"
#include <stdio.h>
/*
 * reset_to_98: Resets the value of n
 *
 * Returns nothing
 */

void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main: Returns the value of the function reset_to_98
 *
 * Return Always  0
 */
int main(void)
{
	int p;
	p = 40;
	reset_to_98(&p);
	printf("The value for p:%d\n", p);
	putchar('\n');
	return (0);
}
