#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print the numbers 0 to 9
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
}
