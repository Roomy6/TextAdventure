#define _CRT_SECURE_NO_WARNINGS

/*		  Game		  */
/*By Roomy and Ruzzix.*/


#include <stdio.h>		// Defines scanf and printf
#include <math.h>		// Has math functions
#include <stdlib.h>		// Defines rand
#include <string.h>		// Defines String
#include <time.h>		// Defines time

#include "HMain.h";



char charName[10] = { "charName" };
char charGender[10] = { "charGender" };

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
	int skipValue = 0;
	int choice = 0, pathLvl = 0, gameLvl = 0, playerLvl = 0;

	// Idk how to check if its has run already so i just thought of this simple skip thing lol.

	if (skipValue == 0)
	{
		int skipValue = 1;

		printf("This Game is purely a simple project dont expect anything amazing.\n");
		printf("Coded and made by Ruzzix and Roomy \n");

		// Add's a delay of 3 seconds.
		delay(3);
		// Clears the console.
		system("cls");
		mainMenu();
	} else if (skipValue != 0)
	{
		while (pathLvl == 0)
		{
			while (gameLvl == 0)
			{
				system("cls");
				printf("%s", charName);
			}
		}
	}

	return 0;
}

int mainMenu()
{
	system("cls");

	printf("+----------------------------------------+\n");
	printf("  . . .,.,,,'':::;;++**!!xxXX&&&&@@@@@@@@ \n");		// Banner
	printf("  .  .....,.'::';;;+;**!!xxXX&&&&@@@@@@@@ \n");
	printf(" .  . ,..,.,':':;:;;+**!!xxXX&&&&@@@@@@@@ \n");		// Just something random for now. (reminds me of the windows 95 logo)
	printf("   . .....,,'':':;;+*+*!!xxXX&&&&@@@@@@@@ \n");
	printf("  . . .,.,.,''':;;;+;**!!xxXX&&&&@@@@@@@@ \n");		// Banner End
	printf("+----------------------------------------+\n");
	printf("                                          \n");
	printf("              [1] New Game                \n");		// Start
	printf("              [2] Settings                \n");		// Settings?
	printf("              [3] Exit                    \n");		// Exit
	printf("                                          \n");
	printf("+----------------------------------------+\n\n");

	printf("#>");
	scanf_s("%d", &intSelect);

	if (intSelect == 1)
	{
		player();
	}
	else if (intSelect == 2)
	{
		printf("Sorry, This feature is not available right now.\n");
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

	printf("+----------------------------------+\n");
	printf("                                    \n");
	printf("        Enter a player name         \n");
	printf("                                    \n");
	printf("        10 Character Limit.         \n");
	printf("                                    \n");
	printf("+----------------------------------+\n\n");

	printf("#>");

	scanf("%s", charName);

	system("cls");

	printf("+----------------------------------+\n");
	printf("                                    \n");
	printf("          Select a gender.          \n");
	printf("                                    \n");
	printf("  [1] Male                          \n");
	printf("  [2] Female                        \n");
	printf("                                    \n");
	printf("+----------------------------------+\n\n");

	printf("#>");

	scanf("%d", &intSelect);

	if (intSelect == 1)
	{
		//char charGender[20] = { "Male" };
		goto mGender;
		printf("%s\n", charGender);
	}
	else {
		//char charGender[20] = { "Female" };
		goto fGender;
		printf("%s\n", charGender);
	}

	// Player Preview

	// Male
mGender:;
	charGender[10] = "Male";
	char mModel1[10] = { " O " };
	char mModel2[10] = { "[#]" };
	char mModel3[10] = { "| |" };

	// Female
fGender:;
	charGender[10] = "Female";
	char fModel1[10] = { " @ " };
	char fModel2[10] = { "[#]" };
	char fModel3[10] = { "| |" };

	// Just noticed we have to do this on every border thing :D (help)

	// Stpuid sdipufgsdopiufgh bug

	if (intSelect == 1)
	{

		// https://stackoverflow.com/questions/347132/append-an-int-to-char
		// https://stackoverflow.com/questions/53659223/why-a-new-string-i-create-in-c-has-instead-of-blanks

		system("cls");

		printf("+----------------------------------------+\n");
		printf("                                          \n");
		printf("  Name:	    %s						      \n", charName);		// Fixed
		//printf("  Gender:   %s						      \n", charGender);	// bugged
		printf("  Health:   %d						      \n", intHealth);		// Fixed (i think)
		printf("  Coins:    %d						      \n", intCoins);		// Fixed
		printf("                                          \n");
		printf(" ___                                      \n");
		printf("|%s|						              \n", mModel1);
		printf("|%s|       Enter Q To Continue...         \n", mModel2);
		printf("|%s|						              \n", mModel3);
		printf(" ---                                      \n");
		printf("                                          \n");
		printf("+----------------------------------------+\n\n");

		printf("#>");

		// Warns the playewr and skips this part of the game...
		// Cus its broken and not fully developed.
		printf("\n YOU ARE IN DEBUG MODE! THIS IS NOT THE COMPLETE VERSION!\n");
		delay(3);
		main();
	}
	else {

		system("cls");

		printf("+----------------------------------------+\n");
		printf("                                          \n");
		printf("  Name:	    %s						      \n", charName);
		//printf("  Gender:   %s						      \n", charGender);
		printf("  Health:   %d						      \n", intHealth);
		printf("  Coins:    %d						      \n", intCoins);
		printf("                                          \n");
		printf("     ___                                  \n");
		printf("    |%s|						          \n", fModel1);
		printf("    |%s|						          \n", fModel2);
		printf("    |%s|						          \n", fModel3);
		printf("     ---                                  \n");
		printf("       Enter Q To Continue...             \n");
		printf("                                          \n");
		printf("+----------------------------------------+\n\n");

		printf("#>");
	}
}

void characters(void)
{
	printf("character\n");

	int Enemy();
	int someone();
	int yeeter();
}

void stats(void)
{
	printf("stats\n");
}

void attacks(void)
{
	printf("attacks\n");
}

void story(void)
{
	printf("story\n");
}