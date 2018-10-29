#include <stdio.h>

int main (void) {

	float value1, value2;

	char	operator;

	printf("Please type in your expression\n");
	scanf ("%f %c %f", &value1, &operator, &value2);

	if ( operator == '+' ) {
		printf ("%.2f\n", value1 + value2);
	}

	else if ( operator == '-' ) {
		printf ("%.2f\n", value1 - value2);
	}

	else if ( operator == '*' ) {
		printf ("%.2f\n", value1 * value2);
	}

	else if ( operator == '/' ) {
		if ( value2 == 0) {
			printf ( "Invalid operation attempted: %.2f/%.0f\n", value1, value2 = 0);
		}
		else {
		printf ("%.2f\n", value1 / value2);
		}
	}

	else {
		printf ("Unusable operator %c. Please use + - * or /\n", operator);
	}



	return 0;
}
