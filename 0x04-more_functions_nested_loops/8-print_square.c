#include "main.h"

/**
 * print_square - prints a square of size `size` using `#` character
 * @size: size of the square to be printed
 *
 * Description: If size is 0 or less, just print a new line.
 *              Otherwise, print `size` lines of `size` `#` characters each.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

