#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse order .
 *
 * Return: return 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
