#include <stdio.h>
int main (void) 
{
	int input, mod, sum;

	input = 2155;
	printf("You entered %i. Adding ", input);
	while ( input != 0) {
	mod = input % 10;
	input = input / 10;
	sum += mod;
	printf(" %i ", mod);
	}
	printf(" = %i\n", sum);

	return 0;
}
