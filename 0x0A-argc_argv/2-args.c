#include <stdio.h>
#include "main.h"
/**
 * main - the main function.
 * @argc: the no. of array arguments
 * @argv: argumentative array
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}

	return (0);
}
