#include <stdio.h>
//Program to find if the input year is leap or not.

int main (void) 
{
	int input_year;
	printf("Enter the year: ");
	scanf ("%i", &input_year);

	if ((input_year % 4 == 0 && input_year % 100 != 0) || (input_year % 400 == 0)) {
		printf("%i is a leap year\n", input_year);
	}
	else {
		printf("%i is not a leap year\n", input_year);
	}

	return 0;
}
