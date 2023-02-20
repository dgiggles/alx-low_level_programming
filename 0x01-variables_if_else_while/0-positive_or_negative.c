#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign any no to n every time its executed
 *if the no greater than 0: is positive, if the no is 0: is zero
 *if the no is less than 0: is negative, followed by a new line
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n<0)
	{
		printf(%d is negative\n, n);
	}
	else
	{
		printf(%d is zero\n, n);
	}
	return (0);
}
