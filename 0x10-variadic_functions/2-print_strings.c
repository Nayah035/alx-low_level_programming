#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - Prints string, separated by a separator string
 * @separator: the separator string
 * @n: the number of strings to print
 * @...: the variable args list of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}


		/* print the separator string if it is not NULL and not the last arg */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

