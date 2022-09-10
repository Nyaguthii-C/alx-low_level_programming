# include <stdio.h>

/**
 * Description : main - prints the sizeof a char is...
 * Return : 0 
 */

int main(void)
{
	char Chartype;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;
	/*sizeof * sizeof prints the size of the various datatypes*/
	printf("Size of a char: %zu byte(s)\n", sizeof(Chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
