#include "main.h"
/**
 * _strstr - the entry point of a string
 * @haystack: inputs values
 * @needle: inputs values
 * return: 0 on success.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
