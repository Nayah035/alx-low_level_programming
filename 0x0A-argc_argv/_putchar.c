#include<stdio.h>
#include"main.h"
/**
 * _putchar - inputs char to a stdout.
 * @c: char input.
 * Return: 1 on success.
 * On error, return -1 and error number
 * is set.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
