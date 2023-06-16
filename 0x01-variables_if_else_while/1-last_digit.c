#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print int
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n%10;
	if (lastdigit > 5)
		printf("is %d and is greater than 5"\n, lastdigit);
	else if (lastdigit == 0)
		printf("is %d and is 0"\n, lastdigit);	
	else
		printf("is %d and is less than 6 and not 0"\n, lastdigit);
	return (0);
}
