// https://github.com/Imtial/TextAdventure/blob/master/adventure.c
// https://www.geeksforgeeks.org/time-delay-c/

#include <stdio.h>		// Defines scanf and printf
#include <math.h>		// Has math functions
#include <stdlib.h>		// Defines rand
#include <string.h>		// Defines String
#include <time.h>		// Defines time



void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds);
}

void player(void)
{
	char name[] = "";
	char gender[] = "";

	printf("Hello Player!");
}

void stats(void)
{
	printf("stats");
}

void coins(void)
{
	int intCoins = 0;
	char charCoins[] = "Coins: ";

	// Cant Figure out coin system
	// nvm i did :D
	// https://stackoverflow.com/questions/347132/append-an-int-to-char

	printf("%s %d", charCoins, intCoins);
}

void attacks(void)
{
	printf("attacks");
}

void story(void)
{
	printf("story");
}

int main(void)
{

	printf("Dear Player,\n");
	printf("This Game is purely a simple project ;)\n\n");

	// Add's a delay of 5 seconds.
	delay(5);

	// Clears the console.
	system("cls");

	// forgot this();
	story();

	return 0;
}