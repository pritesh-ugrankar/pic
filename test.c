#include <stdio.h>

int main (void) 

{
	int p, d;

	for ( p = 0; p <= 5; ++p ) {
		printf ("In P-For Loop - p = %i\n", p);
		for ( d = 0; d <= p; ++d ) {
			printf ("In D-For loop - d = %i\n", d);
		}
	}

	return 0;
}
