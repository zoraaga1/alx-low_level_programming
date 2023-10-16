#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n : int type integer
 *
 * Return: 0 (Success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
