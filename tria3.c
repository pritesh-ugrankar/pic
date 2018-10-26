#include<stdio.h>
int main (void) 
{
	int n, number;
	long long triangularNumber;


	triangularNumber = 0;

	printf("What triangularNumber do you want? ");
	scanf("%i", &number);

	for( n = 1; n <= number; ++n) 
		triangularNumber += n;
		
	printf("Triangular number %i is %lli\n", number,  triangularNumber);
	


	return 0;
}
