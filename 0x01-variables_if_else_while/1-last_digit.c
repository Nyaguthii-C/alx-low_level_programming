#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main -prints last digit of number stored
 *
 * Return: 0 always
 */

int main(void)
{
	int n;
	int LD;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10; /*LD - Last Digit*/
	if (LD > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, LD);
	}
	else if (LD == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, LD);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, LD);
	}
	return (0);
}

