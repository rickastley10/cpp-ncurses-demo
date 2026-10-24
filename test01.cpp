#include <stdio.h>
#include <iostream>
#include <ncurses.h>
#include <time.h>

int main(){
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);
    setlocale(LC_ALL, "");

    int ch;

    srand(time(NULL));
    int random = (rand() % 3) + 1;

    while (1==1)
    {
        clear();
        ch = getch();
        if(ch==27){//escape
            break;
        }



        mvprintw(10, 10, "hello world");
        mvaddstr(5, 10, "\u2588");

        refresh();
        napms(100);
    }
    

    getch();
    endwin();
    return 0;
}
