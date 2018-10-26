#include <stdio.h>
int main (void) 
{
	long long n;

	printf ("TABLE OF NUMBER AND NUMBER SQUARE\n\n");
	printf ("NUMBER\tSQUARE\n");
	printf ("------\t------\n");

	for ( n = 1; n <= 10; ++n) {
		printf("%2i\t %3i\n", n, n * n);
	}



	return 0;
}
