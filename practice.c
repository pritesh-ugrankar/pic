#include <stdio.h>
//Given an integer, write a program that sums the individual 
//digits.

int main (void) {

	int num, sum, mod;

	num = 2155;
	printf("Sum of individual digits of %i is ", num); 
	while ( num != 0 ) {
		mod = num % 10;
		num /= 10;
		sum += mod;
	}

	printf("%i\n", sum);

	
	return 0;
}
