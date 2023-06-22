#include "main.h"
/**
 * _isdigit - Cheks if the input is digit or not
 * @c : int input
 * Return: 0 or 1
 */
int _isdigit(int c)
{
    if (c > 47 && c < 58)
    return (1);
    else
    return (0);
}
