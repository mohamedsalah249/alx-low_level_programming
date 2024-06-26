#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * This function prints every minute of the day in the format "HH:MM",
 * starting from 00:00 to 23:59.
 * Each time is printed on a new line.
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            _putchar('0' + (hour / 10)); /* Print tens digit of hour */
            _putchar('0' + (hour % 10)); /* Print ones digit of hour */
            _putchar(':');
            _putchar('0' + (minute / 10)); /* Print tens digit of minute */
            _putchar('0' + (minute % 10)); /* Print ones digit of minute */
            _putchar('\n'); /* Newline after each minute */
        }
    }
}

