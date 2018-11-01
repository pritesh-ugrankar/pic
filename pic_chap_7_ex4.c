#include <stdio.h>
int main (void) 
{
	float num, accumulator;
	char operator;

	while ( operator != 'E') {
	printf("Enter the number and the operator\n");
	scanf ("%f %c", &num, &operator);

	switch (operator)
	{
		case 'S':
			accumulator = num;
			printf(" = %f \n", accumulator);
			break;

		case '+':
			accumulator += num;
			printf(" = %f \n", accumulator);
			break;
		case '-':
			accumulator -= num;
			printf(" = %f \n", accumulator);
			break;
		case '*':
			accumulator  *= num;
			printf(" = %f \n", accumulator);
			break;
		case '/':
			if ( accumulator == 0) {
				printf("Div By Zero Not Permitted\n");
						}
			else {
				accumulator /=  num;
				printf(" = %f \n", accumulator);
			}
			break;
		case 'E':
			printf(" = %f \n", accumulator);
			printf("End of Calculations.\n");
			break;
		default :
			printf ("Unknown operator - %c\n", operator);
			break;
	}
	}

	return 0;
}
