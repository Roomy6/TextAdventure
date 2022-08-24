#include <stdio.h>		// Defines scanf and printf
#include <math.h>		// Has math functions
#include <stdlib.h>		// Defines rand
#include <string.h>		// Defines String
#include <time.h>		// Defines time


int main(void)
{
	// Cant Figure out coin system
	// nvm i did :D
	// https://stackoverflow.com/questions/347132/append-an-int-to-char


	int intCoins = 10;

	char charCoins[] = "Coins: ";//, intCoins[100];
	char name[] = "";

	printf("Dear Player,\n");
	printf("This Game is purely for a simple project ;)\n\n");
	printf("%s %d", charCoins, intCoins);

	return 0;
}