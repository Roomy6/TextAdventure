#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "spacecount.h"
#include <stdio.h>		// Defines scanf and printf
#include <math.h>		// Has math functions
#include <stdlib.h>		// Defines rand
#include <string.h>		// Defines String
#include <time.h>		// Defines time



// https://www.geeksforgeeks.org/time-delay-c/
void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds);
}

void coins();

void player(void)
{
	char name[10];
	char charGender[20];
	int intGender;
	int health = 20;

	printf("|----------------------------------|\n");
	printf("|                                  |\n");
	printf("|       Enter a player name:       |\n");
	printf("|                                  |\n");
	printf("|        10 character limit        |\n");
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
		char charGender[4] = "Male";
		printf("%s\n", charGender);
	}
	else {
		char charGender[6] = "Female";
		printf("%s\n", charGender);
	}

	// Possibe bug:
	// If character entered "" nothing. might glitch. (just checked you cant enter nothing in)
	// and if coins value is to high, it might also bug out.
	// luckily players prob wont even be able to get get that high coin values lol.

	char spaces[30] = { " " };
	int length = strlen(name);
	if (length == 1) {
		char spaces[30] = { "                          " };
	}
	else if (length == 2) {
		char spaces[30] = { "                         " };
	}
	else if (length == 3) {
		char spaces[30] = { "                        " };
	}
	else if (length == 4) {
		char spaces[30] = { "                       " };
	}
	else if (length == 5) {
		char spaces[30] = { "                       " };
	}
	else if (length == 6) {
		char spaces[30] = { "                     " };
	}
	else if (length == 7) {
		char spaces[30] = { "                    " };
	}
	else if (length == 8) {
		char spaces[30] = { "                   " };
	}
	else if (length == 9) {
		char spaces[30] = { "                  " };
	}
	else if (length == 10) {
		char spaces[30] = { "                 " };
	}

	// Player Preview

	// Male
	char mModel1[4] = " # ";
	char mModel2[4] = "/#\ ";
	char mModel3[4] = "| |";

	// Female
	char fModel1[4] = " @ ";
	char fModel2[4] = "/#\ ";
	char fModel3[4] = "| |";

	// Just noticed we have to do this on every border thing :D (help)

	printf("|----------------------------------|\n");
	printf("| Name: %s%s|\n", name, spaces);
	printf("| Gender: %s|\n", charGender, spaces);
	printf("| Health: %d|\n", health, spaces);
	printf("| Coins: %d|\n", coins, spaces);
	printf("|      Enter Q To Continue...      |\n");
	printf("|                                  |\n");
	printf("|----------------------------------|\n\n");
	printf("%s\n", charGender);

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