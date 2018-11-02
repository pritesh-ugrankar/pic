#include <stdio.h>
int main (void)
{

	float num, accumulator;
	char operator;

	printf("Begin Calculations\n");
	while ( operator != 'E') {
	scanf ("%f %c", &num, &operator);

	switch ( operator ) {
		case 'S':
			accumulator = num;
			printf("=%f\n",accumulator);
			break;
		case 'E':
			printf("=%f\nEnd of Calculations\n",accumulator);
			break;
		case '+':
			accumulator += num;
			printf("=%f\n",accumulator);
			break;
		case '-':
			accumulator -= num;
			printf("=%f\n",accumulator);
			break;
		case '*':
			accumulator *= num;
			printf("=%f\n",accumulator);
			break;
		case '/':
			if ( num == 0) {
				printf("Error!! Div By Zero.\n");
			}
			else {
				accumulator /= num;
				printf("=%f\n",accumulator);
				break;
			}
		default:
			printf("Unknown Operator → %c\n", operator);
			break;

	}
}

	return 0;
}
