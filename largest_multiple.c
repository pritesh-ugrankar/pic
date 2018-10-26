#include<stdio.h>
int main (void)
{
	int i, j, largest_even_mult;
	i = 365, j = 7;
	largest_even_mult= i + j - i % j;
	printf("i = %i\tj=%i\t largest_even_mult = %i\n",i,j,largest_even_mult);
	i = 12258, j = 23; 
	largest_even_mult= i + j - i % j;
	printf("i = %i\tj=%i\t largest_even_mult = %i\n",i,j,largest_even_mult);
	i = 996, j = 4;
	largest_even_mult= i + j - i % j;
	printf("i = %i\tj=%i\t largest_even_mult = %i\n",i,j,largest_even_mult);




	return 0;
}
