#include <stdio.h>
int main (void) 
{
	int n, factorial;

	factorial = 1;

	for (n = 1; n <= 10;++n) {
		factorial *= n;
		printf("%i\t", n);
		printf("%i\n", factorial);
	}
	return 0;
}
