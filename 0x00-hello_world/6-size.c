#include <stdio.h>
/**
 * main - main block
 * Return: o
 * C program that prints the size of vaarious types on the computer it is compiled and run on
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\m", sizeof(char));
	printf("Size of an int: %lu byte(s)\m", sizeof(int));    
	printf("Size of a long int: %lu byte(s)\m", sizeof(long int));    
	printf("Size of a long long int: %lu byte(s)\m", sizeof(long long int));    
	printf("Size of a float: %lu byte(s)\m", sizeof(float));    
	return (0);
}
