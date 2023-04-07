#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 on success otherwise 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
		{
			return (0);
		}
		else
		{
		return (1);
		}

	}

}
