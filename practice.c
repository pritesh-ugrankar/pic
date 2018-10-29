#include <stdio.h>
//Given an integer, write a program that sums the individual 
//digits.

int main (void) {

	int num, sum, mod;

	printf("Enter an unsigned integer: ");
	scanf("%i", &num);
	//num = 2155;
	printf("Sum of individual digits of (decimal) %d (octal) %#o (hex) %#x is ", num, num, num); 
	while ( num != 0 ) {
		mod = num % 10;
		num /= 10;
		sum += mod;
	}

	printf("(decimal) %d (octal) %#o (hex) %#x\n", sum, sum, sum);

	
	return 0;
}
