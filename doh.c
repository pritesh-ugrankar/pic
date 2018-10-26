#include<stdio.h>

int main(void) {

	long long unsigned int your_num;
	printf("Please enter a number.\n");
	printf("Prepend the number as shown below.\n");
	printf("0xFF for hex, 070 for oct, 123 for decimal: ");
	scanf ("%lli", &your_num);
	printf("Dec	%lli\n",  your_num);
	printf("Oct	%#llo\n", your_num);
	printf("Hex	%#llx\n", your_num);

	return 0;
}
