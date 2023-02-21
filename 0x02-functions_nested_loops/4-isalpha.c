#include "main.h"
/**
 * int _isalpha(int c) -  a function that checks for alphabetic character.
 * Return: returns 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 122)
		return (1);
	else 
		return (0);

}
