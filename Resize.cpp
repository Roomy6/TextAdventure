// https://cplusplus.com/forum/windows/10731/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <limits>
#include <stdexcept>
using namespace std;

#include <windows.h>

struct console
{
    console(unsigned width, unsigned height)
    {
        SMALL_RECT r;
        COORD      c;
        hConOut = GetStdHandle(STD_OUTPUT_HANDLE);
        if (!GetConsoleScreenBufferInfo(hConOut, &csbi))
            throw runtime_error("Runtime Error");
        
        // https://stackoverflow.com/questions/71731641/how-to-make-console-automatically-zoom-to-full-screen-when-running-in-c

        HWND Hwnd = GetForegroundWindow();
        int x = GetSystemMetrics(SM_CXSCREEN);
        int y = GetSystemMetrics(SM_CYSCREEN);
        LONG winstyle = GetWindowLong(Hwnd, GWL_STYLE);
        SetWindowLong(Hwnd, GWL_STYLE, (winstyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
        SetWindowPos(Hwnd, HWND_TOP, 0, 0, x, y, 0);

        //https://stackoverflow.com/questions/35382432/how-to-change-the-console-font-size

        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 10;
        cfi.dwFontSize.X = 0;                 // Width of each character in the font
        cfi.dwFontSize.Y = 30;                // Height (0 - 50 recommended)
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_NORMAL;
        std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

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

console con(130, 130);