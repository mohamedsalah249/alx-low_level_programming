#include "main.h"

/**
 * print_numbers - prints the numbers 0-9 followed by a new line
 */
void print_numbers(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit); /* Print each digit from '0' to '9' */
}
_putchar('\n'); /* Print a newline after the digits */
}
