#include <stdio.h>
int main (void)
{
	int input_number, reversed_number;
	char set_sign;
	set_sign = ' ';
	printf ("Enter an integer→ ");
	scanf ("%i", &input_number);

	while (input_number!= 0 ) {
		reversed_number = input_number % 10;
		input_number   /= 10;
		if ( reversed_number < 0) {
			printf ("%i", -reversed_number);
			set_sign = '-';
		}
		else {
			printf ("%i", reversed_number);
		}

	}
	

	printf("%c\n", set_sign);
	return 0;
}
