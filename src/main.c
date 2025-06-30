#include <ncurses.h>
#include "tui.h"
#include "floodicmp.h"

int main(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    scrollok(stdscr, FALSE);
    curs_set(0);
    start_color();
    init_pair(1, COLOR_MAGENTA, -1);
    init_pair(2, COLOR_CYAN, -1);

    int choice;
    do {
        main_menu();
        choice=getch();

        switch(choice){
            case '1': launch_attack_ICMP(); break;
            case '2' : /* func HTTP */ break;
            case '3' : break;
        }
    }while(choice != '3');
    endwin();
    return 0;
}