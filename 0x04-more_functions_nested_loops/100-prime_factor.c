#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long largest_prime = -1;
	long i;

	/* Check for number of 2s */
	while (n % 2 == 0)
	{
		largest_prime = 2;
		n /= 2;
	}

	/* Check for other primes */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n /= i;
		}
	}

	/* This condition is to check if n is a prime number greater than 2 */
	if (n > 2)
		largest_prime = n;

	return largest_prime;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long target = 612852475143;
	long largest_prime = largest_prime_factor(target);

	printf("%ld\n", largest_prime);

	return 0; /* Removed parentheses around return statement */
}

