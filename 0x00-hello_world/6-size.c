# include <stdio.h>

/**
 * Description : main - prints the sizeof a char is...
 * Return : 0 if successful
 */

int main(void)
{
	char Chartype;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;
	/*sizeof * sizeof prints the size of the various datatypes*/
	printf("Size of a char: %zu bytes\n", sizeof(Chartype));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
