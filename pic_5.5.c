#include <stdio.h>
int main (void) {
	int n, number, triangularNumber, counter;

	for ( counter = 1; counter<= 5; ++counter) {
		printf("What triangularNumber do you want:? ");
		scanf ("%i", &number);
		
		triangularNumber= 0;

		for (n = 1; n <= number; ++n) {
			triangularNumber+= n;
		}

		printf("%i triangularNumber is %i\n\n", number, triangularNumber);

	}		

		


	return 0;
}
