#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0x0
#endif

#ifndef EXIT_FAILURE
#define EXIT_FAILURE 0x1
#endif

#define P_COLOR_RED           0x1
#define P_COLOR_BLACK         0x0
#define P_COLOR_GREEN         0x2
#define P_COLOR_YELLOW        0x3
#define P_COLOR_BLUE          0x4
#define P_COLOR_MAGENTA       0x5
#define P_COLOR_CYAN          0x6
#define P_COLOR_WHITE         0x7
#define P_COLOR_LIGHT_BLACK   0x8
#define P_COLOR_LIGHT_RED     0x9
#define P_COLOR_LIGHT_GREEN   0xa
#define P_COLOR_LIGHT_YELLOW  0xb
#define P_COLOR_LIGHT_BLUE    0xc
#define P_COLOR_LIGHT_MAGENTA 0xd
#define P_COLOR_LIGHT_CYAN    0xe
#define P_COLOR_LIGHT_WHITE   0xf

#include <ncurses.h>
#include <unistd.h>
#include <math.h>