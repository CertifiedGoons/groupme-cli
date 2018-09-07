// DOCS: http://www.ibiblio.org/pub/Linux/docs/HOWTO/other-formats/pdf/NCURSES-Programming-HOWTO.pdf

#include "./headers/stdafx.h"

int main()
{
    // Global variables
    int keypress;

#pragma region init
    initscr(); // Initialize ncurses mode
    raw(); // Disable user buffer waiting for carraige return
    keypad(stdscr, TRUE); // Initialize keypad input on standard screen
    noecho(); // Disable echo during user input
    
    // Initialize Color
    start_color();
    init_pair(P_COLOR_RED, COLOR_RED, COLOR_BLACK);
    init_pair(P_COLOR_GREEN, COLOR_GREEN, COLOR_BLACK);
    init_pair(P_COLOR_YELLOW, COLOR_YELLOW, COLOR_BLACK);
    init_pair(P_COLOR_BLUE, COLOR_BLUE, COLOR_BLACK);
    init_pair(P_COLOR_MAGENTA, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(P_COLOR_CYAN, COLOR_CYAN, COLOR_BLACK);
    init_pair(P_COLOR_WHITE, COLOR_WHITE, COLOR_BLACK);
#pragma endregion

    // Main loop
    while (true)
    {
        keypress = getch();
        if (keypress == 27) break; // Exit if ESC key is pressed

        int color = rand() % 6 + 1;
        attron(COLOR_PAIR(color));
        mvprintw(0, 0, "%c\n", keypress);

        refresh();
        usleep(10);
    }
    mvprintw(0, 0, "Exiting...");
    refresh();
    endwin(); // Terminate the window to clean all memory allocations.
    return EXIT_SUCCESS;
}