#include "main.h"
/**
 * set_string - redirect a string to another pointer.
 * @s: double pointer to address
 * @to: the original pointer
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
