#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
