#include<stdio.h>
int main(void) 
{
	int x, y;

	x = 10;
	y = 5;

	y = x + y;
	x *= y;
	printf("x is %d. y is %d\n", x, y);

	return 0;
}
