#include<stdio.h>
int main(void) 
{
	long long unsigned int my_num;
	printf("num = dec, 0num = oct, 0xnum = hex\n");
	printf("Enter decimal, octal or hexadecimal number: ");
	scanf ("%i", &my_num);
	printf("Dec	:%i\n", my_num);
	printf("Oct	:%#o\n", my_num);
	printf("Hex	:%#x\n", my_num);
	
	return 0;
}
