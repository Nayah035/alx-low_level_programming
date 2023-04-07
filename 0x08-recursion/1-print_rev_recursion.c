#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints the string in reverse
 * @s: inputs char
 * return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* checks if the char is null char */
	{
		return;
	}
	_print_rev_recursion(s + 1); /* calls itself for the next char */
	putchar(*s); /* prints the char */
}
