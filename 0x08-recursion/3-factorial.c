#include "main.h"
#include <stdio.h>
/**
 * factorial - returns factorial of a given number
 * @n: number of return the factorial from
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* to indicate an error */
	}
	else if (n == 0)
	{
		return (1); /* base case: factorial of 0 is 1 */
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
