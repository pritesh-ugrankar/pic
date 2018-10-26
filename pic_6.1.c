#include <stdio.h>
int main (void) 
{
	int number;
	
	printf("Enter an integer: ");
	scanf ("%i", &number);
	printf("You entered %i. ", number);

	if (number < 0) {
		number = -number;
	}
	printf("It's absolute value is %i.\n", number);
	return 0;
}
