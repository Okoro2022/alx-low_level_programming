#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: 1 byte \n", sizeof(char));
	printf("size of an int: 4 byte (s)\n", sizeof(int));
	printf("size of a long int: 8 byte(s)\", sizeof(long int));
	printf("size of a long long int: 8 byte(s)\n", sizeof(long long int));
	printf("size of a float: 8 byte(s)\n", sizeof(float));
	xreturn (0);
}
