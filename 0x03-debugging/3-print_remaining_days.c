#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 2)
			day++;
	}

	if (month < 1 || month > 12)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		return;
	}

	if (month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		return;
	}

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("Day of the year: %d\nRemaining days: %d\n", day, 366 - day);
	else
		printf("Day of the year: %d\nRemaining days: %d\n", day, 365 - day);
}

