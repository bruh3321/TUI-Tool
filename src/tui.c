#include <ncurses.h>
#include "tui.h"



void main_menu(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    scrollok(stdscr, FALSE);
    curs_set(0);
    start_color();

    use_default_colors();
    init_pair(1, COLOR_MAGENTA, -1);
    init_pair(2, COLOR_CYAN, -1); 

    attron(COLOR_PAIR(1));
    mvprintw(2, 5,  "  ____   ___   ___  ____  ");
    mvprintw(3, 5,  " |  _ \\ / _ \\ / _ \\|  _ \\ ");
    mvprintw(4, 5,  " | |_) | | | | | | | |_) |");
    mvprintw(5, 5,  " |  __/| |_| | |_| |  __/ ");
    mvprintw(6, 5,  " |_|    \\___/ \\___/|_|    ");
    attroff(COLOR_PAIR(1));

    attron(COLOR_PAIR(2));
    mvprintw(8, 8, "-- welcome to the useless DDOS tool --");
    mvprintw(5, 30, "1. ICMP flood");
    mvprintw(6, 30, "2. HTTP flood");
    mvprintw(7, 30, "3. Quit Program");
    attroff(COLOR_PAIR(2));

    refresh();
    endwin();
}

void progress(){
    // to do later after the ICMP flood is set
}