#include "main.h"

/**
 * _memset - fuction fills the block of memory with the specific value
 * @s: The starting address of the memory to be filled.
 * @b: The desired values
 * @n: The numbers of bytes to be changed
 * Return: The changed array with the new value for n bytes on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
