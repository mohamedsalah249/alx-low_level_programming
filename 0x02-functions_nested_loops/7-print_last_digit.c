#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to process
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        last_digit = -1 * (n % 10); /* Get positive last digit */
    else
        last_digit = n % 10;

    _putchar('0' + last_digit); /* Print last digit */
    return last_digit;
}

