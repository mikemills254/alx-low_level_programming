/*
 * File: 0-positive_or_negative
 * Auth: Mike Mills
 */
	
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -This code prints randoom number
 * 	and declares if positive or negative
 *
 * 	Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d id negative\n", n);
	else
		printf("%d is zero\n", n);


	return(0);
}
