#include <stdio.h>

int main (void) 
{
	int	p,d;
	_Bool 	isPrime;

	for ( p = 1; p <= 3; ++p) {
		printf ("In the p for loop. p = %i\n", p);
		for ( d = 1; d <= p; ++d) {
		printf ("In the d for loop. d = %i\n", d);
		printf ("End of  the d for loop\n");
		}
		printf ("End of  the p for loop\n");
	}
	printf("\n");
	return 0;
}
