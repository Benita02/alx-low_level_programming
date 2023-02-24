#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * prints all single digit number of base 16
 * starting from 0, followed by a new line.
 * Return: alwaus 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
