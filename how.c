#include <stdio.h>
int how (void);
int main (void) 
{
	printf("This is the main function.\n");
	how();
	return printf("this is the \"return\" in main function.\n");
}

int how (void) 
{
	printf("This is a function called \"how\".\n");
	return printf("This \"return\" is from the \"how\" function.\n");
}
