#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*_puts - prints a string
*@str: A pointer to an int that will be changed
*
*Return: void which means our answer is correct
*/

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
