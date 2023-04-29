#include <unistd.h>
/**
 * _putchar - writes the char c into standard output
 * @c: This prints char c
 * Return: Always returns 1 on success
 * The error, -1 is always returned, and error no. is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
