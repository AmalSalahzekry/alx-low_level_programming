#include <stdio.h>

/**
* main - entry point
* Description: this program type sizes of data types
* Return 0 (success)
*/
int main(void)
{

	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(d));
	printf("Size of a long int: %d byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lld));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
