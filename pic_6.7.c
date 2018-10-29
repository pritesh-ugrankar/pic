#include <stdio.h>

int main (void) 
{
	char c;
	printf("Enter a single character: ");
	scanf ("%c", &c);

	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		printf("You entered an alphabet %c\n", c);
	}
	else if (c >= '0' && c <= '9') {
		printf("You entered digit %c\n", c);
	}

	else {
		printf ("You entered %c which is neither an alphabet nor a digit\n", c);
	}


	return 0;
}
