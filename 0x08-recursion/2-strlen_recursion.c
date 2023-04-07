#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - culculates length of a string
 * @s: input the string to be measured
 * return: 0 on success
 * Return: returns len of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case: when the char is the null terminator */
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1)); /* otherwise add 1 to the len' of the remaining string */
	}
}
