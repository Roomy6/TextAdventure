// https://github.com/Imtial/TextAdventure/blob/master/adventure.c
// https://www.geeksforgeeks.org/time-delay-c/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		// Defines scanf and printf
#include <math.h>		// Has math functions
#include <stdlib.h>		// Defines rand
#include <string.h>		// Defines String
#include <time.h>		// Defines time

#include "HMain.h";



int main(void)
{

	printf("Dear Player,\n");
	printf("This Game is purely a simple project ;)\n\n");

	// Add's a delay of 2 seconds.
	delay(2);

	// Clears the console.
	system("cls");

	// forgot this();
	player();

	return 0;
}