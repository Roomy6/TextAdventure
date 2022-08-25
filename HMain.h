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
	char name[10];
	char charGender[20];
	int intGender;

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
		char charGender[20] = "Male";
		printf("%s\n", charGender);
	}
	else {
		char charGender[20] = "Female";
		printf("%s\n", charGender);
	}

	int i;
	int length = strlen(name);
	char space[] = " ";
	char spaces[] = " ";
	for (i = length; i != 0; i -= 1) {
		strcat(spaces, space);
	}

	printf("|----------------------------------|\n");
	printf("| Name: %s%s                       |\n", name, spaces);
	printf("|                                  |\n");
	printf("|                                  |\n");
	printf("| 1) Male                          |\n");
	printf("| 2) Female                        |\n");
	printf("|                                  |\n");
	printf("|----------------------------------|\n\n");

	// Player Preview

	// Male
	char mModel1[4] = " # ";
	char mModel2[4] = "/#\ ";
	char mModel3[4] = "| |";

	// Female
	char fModel1[4] = " @ ";
	char fModel2[4] = "/#\ ";
	char fModel3[4] = "| |";

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