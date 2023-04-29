#include<stdio.h>
#include"main.h"
/**
 * _atoi - converts the two strings into int
 * @s: a string
 * Return: The integer converted.
 */
int _atoi(char *s)
{
	int j, e, o, length, g, dgt;

	j = 0;
	e = 0;
	o = 0;
	length = 0;
	g = 0;
	dgt = 0;

	while (s[length] != '\0')
		length++;

	while (j < length && g == 0)
	{
		if (s[j] == '-')
			++e;

		if (s[j] >= '0' && s[j] <= '9')
		{
			dgt = s[j] - '0';
			if (e % 2)
				dgt = -dgt;
			o = o * 10 + dgt;
			g = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}

	if (g == 0)
		return (0);

	return (o);
}

/**
 * main - takes two arguments
 * @argc: command-line argument
 * @argv: array of string arguments
 * Return: 0 on success and 1 on fail
 */
int main(int argc, char *argv[])
{
	int result, new1, new2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	new1 = _atoi(argv[1]);
	new2 = _atoi(argv[2]);
	result = new1 * new2;

	printf("%d\n", result);

	return (0);
}
