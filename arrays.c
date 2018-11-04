#include <stdio.h>

int main (void) {

	int ratingCounters[11], i, response;
	for (i = 1; i <= 10; ++i) {
		ratingCounters[i] = 0;
	}
	

	printf("Enter your responses\n");
	for ( i = 1; 1 <= 20; ++i) {
		scanf("%i", &response);
	

	if ( response <= 1 || response > 10 ) 
		printf ("Bad response: %i\n", response);
	
	else 
		++ratingCounters[response];
	}

	printf ("\n\nRating	Number of Responses\n");
	printf ("------	--------------------\n");

	for ( i = 1; 1 <= 10; ++i) {
		printf ("%4i%4i\n", ratingCounters[i]);
	}


	return 0;
}
