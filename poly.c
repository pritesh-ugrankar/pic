#include<stdio.h>
int main (void) 
{
	float x = 2.55;

	float result = 3 * (x * x * x) - 5 * (x * x) + 6;
	printf("For x = %f, 3x^3 - 5x^2 + 6 = %f\n", x, result);
	return 0;
}
