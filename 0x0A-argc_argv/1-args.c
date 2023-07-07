#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
