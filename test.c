#include <stdio.h>

int main (void) 
{
	int input_number, sum_digits, mod;

	input_number = 55555;

	
	while (input_number != 0) {
		 mod =  input_number % 10;
		 input_number /= 10;
		 sum_digits += mod;
		 printf("input_number= %i mod = %i\n", input_number, mod);
	}
	
	printf("Sum = %i\n", sum_digits);

	return 0;
}
