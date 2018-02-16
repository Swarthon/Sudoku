#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

#include "terrain.h"
#include "terrain_format.h"
#include "test.h"

int cursor_x = 0;
int cursor_y = 0;

void move_cursor(int c) {
        switch(c) {
        case KEY_DOWN:
                cursor_y++;
                break;
        case KEY_UP:
                cursor_y--;
                break;
        case KEY_RIGHT:
                cursor_x++;
                break;
        case KEY_LEFT:
                cursor_x--;
                break;
        default:
                return;
        }
        if(cursor_x < 0) cursor_x = 0;
        if(cursor_y < 0) cursor_y = 0;
        if(cursor_x > 8) cursor_x = 8;
        if(cursor_y > 8) cursor_y = 8;

        move(cursor_y*4+2 + cursor_y/3,cursor_x*4+2 + cursor_x/3);
}
void choose_number(int c) {
        if(c >= '1' && c <= '9')
                case_set(cursor_x,cursor_y,c-'0');
        else if(c == KEY_DC || c == KEY_BACKSPACE)
                case_set(cursor_x,cursor_y,0);
        else
                return;

        int res;
        if((res = test_horizontal(cursor_y)))
                mvprintw(5,45,"Invalid number of %d in row %d\n", res, cursor_y);
        if((res = test_vertical(cursor_x)))
                mvprintw(5,45,"Invalid number of %d in column %d\n", res, cursor_x);
        if((res = test_square(cursor_x,cursor_y)))
                mvprintw(5,45,"Invalid number of %d in square\n", res);
}
int main() {
        initscr();
        noecho();
        keypad(stdscr,TRUE);
        curs_set(2);

        terrain_format_init();
        terrain_format_print();
        while(1) {
                terrain_print();
                move(cursor_y*4+2 + cursor_y/3,cursor_x*4+2 + cursor_x/3);

                int c = getch();
                move(5,45);
                clrtoeol();

                move_cursor(c);
                choose_number(c);
                if(test_end())
                        break;
                refresh();
        }
        clrtoeol();
        endwin();
}
