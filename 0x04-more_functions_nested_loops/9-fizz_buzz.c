#include <stdio.h>
/**
 * main -entry point . calls other functions
 * printf - prints numbers from 1-100 and fizz, fizzbuz and fizz
 * for multiples of 3, 3 and 5 and 5
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 1;
	
	while (i <= 100)
	{ 
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
