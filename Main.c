#define _CRT_SECURE_NO_WARNINGS

/*		  Game		  */
/*By Roomy and Ruzzix.*/


#include <stdio.h>		// Defines scanf and printf
#include <math.h>		// Has math functions
#include <stdlib.h>		// Defines rand
#include <string.h>		// Defines String
#include <time.h>		// Defines time
#include <Windows.h>

#include "HMain.h";


BOOL WINAPI GetConsoleScreenBufferInfo(_In_ HANDLE hConsoleOutput, _Out_ PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo);

int main(void)
{
	printf("This Game is purely a simple project dont expect anything amazing.\n");
	printf("Coded and made by Ruzzix and Roomy \n");

	// Add's a delay of 3 seconds.
	delay(3);

	// Clears the console.
	system("cls");

	// forgot this();
	player();

	return 0;
}