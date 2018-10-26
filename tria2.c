#include<stdio.h>
int main (void) 
{
	int n, triangularNumber;
	triangularNumber = 0;

	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf("n\t\tSum from 1 to n\n");
	printf("------\t\t----------------------\n");

	for( n = 1; n <= 10; n++) {
		triangularNumber += n;
		printf("n = %-2i\t\ttriangularNumber = %-3i\n", n, triangularNumber);
	}
	return 0;
	
}
