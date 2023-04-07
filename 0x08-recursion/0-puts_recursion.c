#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints the chars recursively
 * @s: input of a char
 * return: 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /*base case: end of string */
	{
		putchar('\n'); /* add a new line at the end */
		return;
	}
	putchar(*s); /*print the current character */
	_puts_recursion(s + 1); /*recursively call the function for next character */
}
