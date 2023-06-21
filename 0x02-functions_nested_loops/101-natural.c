#include "main.h"

/**
 * main - Compute and print the sum of f 3 or 5 below 1024 (excluded)
 * Return: 0
 */

int main()
{
	int a = 3;
	int b = 5;
	int sum;
	int i = 1;
	
	while (sum != 1024){
		int j = a * i;
		int h = b * i;
		sum = j + h;
		printf("%d\n" ,sum);
		i++;
	}
	return(0);
}
