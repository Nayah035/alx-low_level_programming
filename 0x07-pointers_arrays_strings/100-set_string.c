#include "main.h"
/**
 * set_string - The value of the pointer is set to char
 * @s: It is a pointer to a pointer
 * @to: It points to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
