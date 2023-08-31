#include "main.h"
/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	signed long int _size;
	char _c;
	int _flag;

	_size = sizeof(n) * 8 - 1;
	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	_flag = 0;
	while (_size >= 0)
	{
		_c = (n >> _size) & 1;
		if (_flag == 1)
			putchar(_c + '0');
		else
		{
			if (_c == 1)
			{
				putchar(_c + '0');
				_flag = 1;
			}
		}
		_size -= 1;
	}
}
