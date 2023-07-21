#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * op_add - calcul the sum of two numbers
 * @a: first number
 * @b:second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/*
 * op_sub - calcul the substract of two numbers
 * @a: first number
 * @b:second number
 *
 * Return: sub
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/*
 * op_mul - calcul the multip of two numbers
 * @a: first number
 * @b:second number
 *
 * Return: multip
 */

int op_mul(int a, int b)
{
        return (a * b);
}

/*
 * op_div - calcul the division of two numbers
 * @a: first number
 * @b:second number
 *
 * Return: division
 */

int op_div(int a, int b)
{
        return (a / b);
}

/*
 * op_mod - calcul the modulo of two numbers
 * @a: first number
 * @b:second number
 *
 * Return: modulo
 */

int op_mod(int a, int b)
{
        return (a % b);
}
