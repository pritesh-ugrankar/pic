#include <stdio.h>
int main (void)
{
	int n, triangularNumber;

	for ( n = 5; n <= 50; n += 5) {
		triangularNumber = n * ( n + 1 ) / 2;
		printf("%2i Triangular Number is %i\n", n, triangularNumber);
	}
	return 0;
}
