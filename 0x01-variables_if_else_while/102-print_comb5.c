#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: return 0 on success
 */
int main(void)
{
	int num1, num2;

	for(num1 = 0; num1 <= 98, num 1++;
        {

		for(num2 = num1 + 1; num2 <= 98; num 1++;
		{
		       putchar((num1 / 10) + '0')
 	               putchar((num1 % 10) + '0');
	      	       putchar(' ');
            	       putchar((num2 / 10) + '0');
                       putchar((num2 % 10) + '0');
 
                       if (num1 == 98 && num2 == 99)
                    	   continue;
	 
	      	       putchar(',');
            	       putchar(' ');
		}
	}
        putchar('\n');

	return (0);
}
		
