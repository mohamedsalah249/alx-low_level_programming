#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	int is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		n = -n; /* Make n positive */
	}

	/* Find the appropriate divisor to get the most significant digit */
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Extract and print each digit */
	while (divisor != 0)
	{
		digit = n / divisor; /* Extract the leftmost digit */
		_putchar(digit + '0'); /* Print the digit as a character */
		n %= divisor; /* Remove the printed digit from n */
		divisor /= 10; /* Move to the next digit */
	}

	if (is_negative)
	{
		_putchar('-'); /* Print the negative sign */
	}
}

