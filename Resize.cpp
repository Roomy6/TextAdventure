// https://cplusplus.com/forum/windows/10731/
#include <iostream>
#include <limits>
#include <stdexcept>
using namespace std;

#include <windows.h>

//----------------------------------------------------------------------------
struct console
{
    console(unsigned width, unsigned height)
    {
        SMALL_RECT r;
        COORD      c;
        hConOut = GetStdHandle(STD_OUTPUT_HANDLE);
        if (!GetConsoleScreenBufferInfo(hConOut, &csbi))
            throw runtime_error("Runtime Error");

        r.Left =
            r.Top = 0;
        r.Right = width - 1;
        r.Bottom = height - 1;
        SetConsoleWindowInfo(hConOut, TRUE, &r);

        c.X = width;
        c.Y = height;
        SetConsoleScreenBufferSize(hConOut, c);
    }

    ~console()
    {
        SetConsoleTextAttribute(hConOut, csbi.wAttributes);
        SetConsoleScreenBufferSize(hConOut, csbi.dwSize);
        SetConsoleWindowInfo(hConOut, TRUE, &csbi.srWindow);
    }

    void color(WORD color = 0x07)
    {
        SetConsoleTextAttribute(hConOut, color);
    }

    HANDLE                     hConOut;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
};

console con(
    40,     // Height
    40);    // Width