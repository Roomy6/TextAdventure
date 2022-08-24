#pragma once
#define _CRT_SECURE_NO_WARNINGS
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
	char name[20];
	char charGender[20];
	int intGender;

	printf("|----------------------------------|\n");
	printf("|                                  |\n");
	printf("|       Enter a player name:       |\n");
	printf("|                                  |\n");
	printf("|----------------------------------|\n\n");

	scanf("%s", name);

	printf("Welcome %s!\n", name);
	delay(3);

	system("cls");

	printf("|----------------------------------|\n");
	printf("|                                  |\n");
	printf("|         Select a gender.         |\n");
	printf("|                                  |\n");
	printf("| 1) Male                          |\n");
	printf("| 2) Female                        |\n");
	printf("|                                  |\n");
	printf("|----------------------------------|\n\n");

	scanf("%d", &intGender);

	if (intGender == 1)
	{
		char charGender[20] = "Male";
		printf("%s\n", charGender);
	}
	else {
		char charGender[20] = "Female";
		printf("%s\n", charGender);
	}

}

void characters(void)
{
	// yeet
}

void stats(void)
{
	printf("stats\n");
}

void coins(void)
{
	int intCoins = 0;
	char charCoins[] = "Coins: ";

	// Cant Figure out coin system
	// nvm i did :D
	// https://stackoverflow.com/questions/347132/append-an-int-to-char

	printf("%s %d\n", charCoins, intCoins);
}

void attacks(void)
{
	printf("attacks\n");
}

void story(void)
{
	printf("story\n");
}