#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * This function prints the multiplication table of 9 in a specific format:
 * Each row represents the products of multiplying 0 to 9 by 9.
 * Numbers are separated by commas and spaces, and single-digit numbers
 * are padded with spaces to align properly.
 */
void times_table(void)
{
    int row, column, product;

    for (row = 0; row <= 9; row++)
    {
        for (column = 0; column <= 9; column++)
        {
            product = row * column;

            /* Print comma and space unless it's the first column */
            if (column > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            /* Print product with padding */
            if (product < 10 && column > 0)
                _putchar(' '); /* Extra space for single-digit numbers */

            if (product >= 10)
            {
                _putchar('0' + (product / 10)); /* Print tens digit */
                _putchar('0' + (product % 10)); /* Print ones digit */
            }
            else
            {
                _putchar('0' + product); /* Print single-digit number */
            }
        }
        _putchar('\n'); /* Newline after each row */
    }
}

