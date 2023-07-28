#include "lists.h"

/**
 * print_message -  prints a message before main
 * Return: void
 */

void __attribute__((constructor)) print_message(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

