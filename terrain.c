#include "terrain.h"

#include <ncurses.h>

const int terrain[9][9] = {
        {0,5,2, 0,0,6, 0,0,0},
        {1,6,0, 9,0,0, 0,0,4},
        {0,4,9, 8,0,3, 6,2,0},

        {4,0,0, 0,0,0, 8,0,0},
        {0,8,3, 2,0,1, 5,9,0},
        {0,0,1, 0,0,0, 0,0,2},

        {0,9,7, 3,0,5, 2,4,0},
        {2,0,0, 0,0,9, 0,5,6},
        {0,0,0, 1,0,0, 9,7,0},
};


void case_set(int x, int y, int i) {
        if(terrain[y][x] == 0)
                layer[y][x] = i;
}
int case_get(int x, int y) {
        if(terrain[y][x] == 0)
                return layer[y][x];
        return terrain[y][x];
}
char case_convert(int i) {
        if(i == 0)
                return ' ';
        else {
                char buf [2];
                sprintf(buf, "%d", i);
                return buf[0];
        }
}


void terrain_print() {
        for(int x = 0; x < 9; x++)
                for(int y = 0; y < 9; y++)
                        mvaddch(y*4+2 + y/3,x*4+2 + x/3,case_convert(case_get(x,y)));
}
