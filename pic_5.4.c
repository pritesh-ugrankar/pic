#include <stdio.h>

int main (void) 
{
	long long int n, number, triangularNumber;

	printf("Which triangular number do you want?\n");
	scanf ("%i", &number);

	triangularNumber= 0;

	for ( n = 1; n <= number; ++n) {
		triangularNumber += n;
	}
	printf("%lli triangular number is %lli\n", number, triangularNumber);
	

	return 0;
}
