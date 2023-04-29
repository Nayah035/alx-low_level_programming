#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - takes two arguments
 * @argc: command-line argument
 * @argv: array of string arguments
 * Return: 0 on success and 1 on fail
 */
int main(int argc, char *argv[])
{
	int y, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);
	result = 0;

	if (y < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && y >= 0; k++)
	{
		while (y >= coins[k])
		{
			result++;
			y -= coins[k];
		}
	}

	printf("%d\n", result);
	return (0);
}
