#define _CRT_SECURE_NO_WARNINGS

/*		  Game		  */
/*By Roomy and Ruzzix.*/


#include <stdio.h>		// Defines scanf and printf
#include <math.h>		// Has math functions
#include <stdlib.h>		// Defines rand
#include <string.h>		// Defines String
#include <time.h>		// Defines time
#include <iostream>

using namespace std;

char charName[10] = { "charName" };
char charGender[11] = { "charGender" };

int intSelect = 0;
int intHealth = 20;
int intCoins = 100;

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

int main(void)
{
	int choice = 0, pathLvl = 0, gameLvl = 0, playerLvl = 0;

	while (pathLvl == 0)
	{
		while (gameLvl == 0)
		{
			system("cls");
			cout << ("%s", charName);
		}
	}

	system("cls");

	cout << ("This Game is purely a simple project dont expect anything amazing.\n");
	cout << ("Coded and made by Ruzzix and Roomy \n");

	// Add's a delay of 3 seconds.
	delay(3);
	// Clears the console.
	system("cls");
	mainMenu();

	return 0;
}

int mainMenu(void)
{
	system("cls");

	cout << ("+----------------------------------------+\n");
	cout << ("  . . .,.,,,'':::;;++**!!xxXX&&&&@@@@@@@@ \n");		// Banner
	cout << ("  .  .....,.'::';;;+;**!!xxXX&&&&@@@@@@@@ \n");
	cout << (" .  . ,..,.,':':;:;;+**!!xxXX&&&&@@@@@@@@ \n");		// Just something random for now. (reminds me of the windows 95 logo)
	cout << ("   . .....,,'':':;;+*+*!!xxXX&&&&@@@@@@@@ \n");
	cout << ("  . . .,.,.,''':;;;+;**!!xxXX&&&&@@@@@@@@ \n");		// Banner End
	cout << ("+----------------------------------------+\n");
	cout << ("                                          \n");
	cout << ("              [1] New Game                \n");		// Start
	cout << ("              [2] Settings                \n");		// Settings?
	cout << ("              [3] Exit                    \n");		// Exit
	cout << ("                                          \n");
	cout << ("+----------------------------------------+\n\n");

	cout << (">");
	scanf_s("%d", &intSelect);

	if (intSelect == 1)
	{
		player();
	}
	else if (intSelect == 2)
	{
		cout << ("Sorry, This feature is not available right now.\n");
		delay(3);
		mainMenu();
	}
	else if (intSelect == 3)
	{
		return 0;
	}
}

int player()
{
	system("cls");

	// Possibe bug:
	// If character entered "" nothing. might glitch. (just checked you cant enter nothing in)
	// and if coins value is to high, it might also bug out (same to health).
	// luckily players prob wont even be able to get get that high values lol.

	// this does not work because you are trying to call spaces inside another funtion.
	// have to somehow figure out how to make them public.

	/*char spaces[30] = { " " };

	int length = strlen(charName);
	if (length == 1)
	{
		char spaces[100] = { "a                          a" };
	}
	else if (length == 2)
	{
		char spaces[100] = { "a                         a" };
	}
	else if (length == 3)
	{
		char spaces[100] = { "a                        a" };
	}
	else if (length == 4)
	{
		char spaces[100] = { "a                       a" };
	}
	else if (length == 5)
	{
		char spaces[100] = { "a                       a" };
	}
	else if (length == 6)
	{
		char spaces[100] = { "a                     a" };
	}
	else if (length == 7)
	{
		char spaces[100] = { "a                    a" };
	}
	else if (length == 8)
	{
		char spaces[100] = { "a                   a" };
	}
	else if (length == 9)
	{
		char spaces[100] = { "a                  a" };
	}
	else if (length == 10)
	{
		char spaces[100] = { "a                 a" };
	}*/

	cout << ("+----------------------------------+\n");
	cout << ("                                    \n");
	cout << ("        Enter a player name         \n");
	cout << ("                                    \n");
	cout << ("        10 Character Limit.         \n");
	cout << ("                                    \n");
	cout << ("+----------------------------------+\n\n");

	cout << (">");

	scanf("%s", charName);

	system("cls");
}

void characters(void)
{
	cout << ("character\n");

	int Enemy();
	int someone();
	int yeeter();
}

void stats(void)
{
	cout << ("stats\n");
}

void attacks(void)
{
	cout << ("attacks\n");
}

void story(void)
{
	cout << ("story\n");
}