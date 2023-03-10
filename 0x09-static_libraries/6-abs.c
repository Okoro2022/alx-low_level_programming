#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _abs - value absolute
 *
 *@n: The int to print
 * Return: Always 0.
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}
