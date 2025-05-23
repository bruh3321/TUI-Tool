#include <ncurses.h>
#include "tui.c"

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

    char choice;
    do {
        main_menu();
        choice=getch();

        switch(choice){
            case '1': /* func ICMP */ break;
            case '2' : /* func HTTP */ break;
            case 'q' : break;
        }
    }while(choice!="q" && choice!="Q");
    return 0;
}