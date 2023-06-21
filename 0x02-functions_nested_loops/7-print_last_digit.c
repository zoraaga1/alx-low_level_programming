#include "main.h"
/**
 * print_last_digit - print 10 times the alphabet a-z in lowercase
 * @m: int type integer 
 *
 * Return: 0 (Success)
 */

int print_last_digit(int m)
{
	int lastdigit;
	
	m = _abs(m);
	lastdigit = m % 10;
	return (lastdigit);
}
