#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - takes int as argument
 * @str: array string.
 * Return: 0 on success
 */
int check_num(char *str)
{
	/*thisis variables decraration*/
	unsigned int xyz;

	xyz = 0;
	while (xyz < strlen(str)) /*xyz string*/

	{
		if (!isdigit(str[xyz])) /*To check if string there are digit*/
		{
			return (0);
		}

		xyz++;
	}
	return (1);
}

/**
 * main - takes two arguments
 * @argc: number of arguments
 * @argv: array of striing Arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/*variables declaration*/
	int xyz;
	int str_to_int;
	int sum = 0;

	xyz = 1;
	while (xyz < argc)
	{
		if (check_num(argv[xyz]))

		{
			str_to_int = atoi(argv[xyz]); /*ATOI --> this converts strings to ints*/
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		xyz++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
