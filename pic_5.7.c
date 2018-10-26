#include <stdio.h>
int main (void) 
{
	int u, v, temp;

	printf("Please type in two non negative integers.\n");
	scanf ("%i%i", &u, &v);
	printf("The greatest common divider of %i and %i is", u, v);

	while ( v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	printf(": %i\n",u);

	return 0;
}
