#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse with recursion method
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s);
{
   if (*s)
  {
   _puts_recursion(s + 1);
    putchar(*s);
  }

}
