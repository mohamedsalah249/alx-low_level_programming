#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: Always 0
 */
int main(void)
{
	/* Variables */
	int i;

	/* Output message for infinite loop */
	printf("Infinite loop incoming :(\n");

	/* Initialize variable */
	i = 0;

	/* Commenting out the problematic code causing infinite loop */
	/*
	 * while (i < 10)
	 * {
	 *     putchar(i);
	 * }
	 */

	/* Fixed loop to print numbers 0 to 9 */
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i); /* Print numbers as characters */
	}

	/* Output message for loop completion */
	printf("\nInfinite loop avoided! \\o/\n");

	return (0);
}

