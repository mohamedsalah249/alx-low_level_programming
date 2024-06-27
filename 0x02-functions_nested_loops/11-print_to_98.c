#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: The starting number
 *
 * Return: void
 *
 * Description: Numbers are printed in order, separated by a comma and space.
 * The first printed number should be the number passed to the function, and
 * the last printed number should be 98.
 */
void print_to_98(int n)
{
    int i;  /* Declare loop variable before the loop */

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            _putchar((i / 100) + '0'); /* Hundreds digit */
            _putchar(((i / 10) % 10) + '0'); /* Tens digit */
            _putchar((i % 10) + '0'); /* Ones digit */

            if (i != 98)
            {
                _putchar(','); /* Print comma */
                _putchar(' '); /* Print space */
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            _putchar((i / 100) + '0'); /* Hundreds digit */
            _putchar(((i / 10) % 10) + '0'); /* Tens digit */
            _putchar((i % 10) + '0'); /* Ones digit */

            if (i != 98)
            {
                _putchar(','); /* Print comma */
                _putchar(' '); /* Print space */
            }
        }
    }
    _putchar('\n'); /* New line at the end */
}

