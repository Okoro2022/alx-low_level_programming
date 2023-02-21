#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: return 0 on success
 */
int main(void)
{
	int num1, num2;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
