#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: string whose length is being returned
 * Return: length of s
 */
size_t _strlen(const char *s)

{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);

}
