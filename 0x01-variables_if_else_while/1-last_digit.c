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
	int LD = n % 10; /*LD - Last Digit*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (LD > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, LD);
	}
	else if (LD == 0)
	{
		printf("Last digit of %i is %i and is zero\n", n, LD);
	}
	else(LD < 6 && LD != 0)
	{
		printf("Last digit of %i is %i");
		printf("and is less than 6 and not 0\n", n, LD);
	return (0);
	}
}

