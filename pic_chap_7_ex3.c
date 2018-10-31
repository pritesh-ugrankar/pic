#include <stdio.h>
int main (void) 
{
	int a, b;

	printf("Enter two integers↓↓\n");
	scanf ("%i%i", &a, &b);
	if ( b == 0 ) {
		printf ("Div by Zero Not Permitted.\n");
	}

	else {
		printf ("%i / %i = %.3f\n", a , b, (float) a / b);
	}
	
	return 0;
}
