#include "Putchar"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
