#include<stdarg.h>
#include<stdio.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *      c: char
 *      i: int
 *      f: float
 *      s: char * if the string is NULL, print (nil) instead
 *      of any other char should be ignored
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	int i;
	double f;
	char *s;


	while (*format)
	{

		if (*format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c)
		}
		else if (*format == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i)
		}
		else if (*format == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}

		format++;

		if (*format)
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
