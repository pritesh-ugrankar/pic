#include <stdio.h>
int main (void) 
{
	int a , b;

	printf ("Enter two integers\n");
	scanf ("%i%i", &a, &b);


	if ( b == 0) {
		printf("Div By Zero not permitted.\n");
	}

	else {	
		a % b == 0 ? 
		printf (" Evenly divisible. %i %% %i is zero.\n", a, b) : 
		printf (" NOT Evenly divisible. %i %% %i is NOT zero.\n", a, b);
	}
	return 0;
}
