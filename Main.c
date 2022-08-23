# include <stdio.h>		// Defines scanf and printf
# include <math.h>		// Has math functions
# include <stdlib.h>	// Defines rand
# include <string.h>	// Defines String
# include <time.h>		// Defines time


int main(void)
{

	int seed = time(NULL);
	srand(seed);

	char name[] = "";

	printf("Welcome Player!\n");
	printf("Enter your player name to continue!\n");

	return 0;
}