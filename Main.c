# include <stdio.h>		// Defines scanf and printf
# include <math.h>		// Has math functions
# include <stdlib.h>	// Defines rand
# include <string.h>	// Defines String
# include <time.h>		// Defines time


int main(void)
{

	int seed = time(NULL);
	srand(seed);

	int PlayerMotion;
	int x, y;
	int True;

	printf("Welcome Player!\n");
	printf("1 = Up | 2 = Down | 3 = Left | 4 = Right\n");

	return 0;
}