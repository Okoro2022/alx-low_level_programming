#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * do not print 2 and 4
 * only use _putchar twice
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
	_putchar('\n');
}
