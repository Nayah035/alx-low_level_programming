#include "main.h"
/**
 * _sqrt_helper - binary search
 * _sqrt_recursion - returns natural square root of a number
 * @n: number value
 * @start: starting value
 * @end: ending value
 * @mid: middle value
 */
int _sqrt_helper(int n, int start, int end);

/* Returns the natural square root of a number n, or -1 if n does not have a natural square root. */
int _sqrt_recursion(int n)
{
		/* Check for base case */
	if (n == 0 || n == 1)
	{
		return (n);
	}

		/* Call helper function to perform binary search */
	return (_sqrt_helper(n, 1, n / 2));
}

/* Recursive binary search helper function */
int _sqrt_helper(int n, int start, int end)
{
		/* Base case: the square root is not a whole number */
	if (start > end)
	{
		return (-1);
	}

	/* Calculate the middle point */
	int mid = (start + end) / 2;

		/* Check if mid^2 is equal to n */
	if (mid * mid == n)
	{
		return (mid);
	}

		/* If mid^2 is less than n, search the upper half */
	if (mid * mid < n)
	{
		return (_sqrt_helper(n, mid + 1, end));
    	}

	/* If mid^2 is greater than n, search the lower half */
		return (_sqrt_helper(n, start, mid - 1));
}
