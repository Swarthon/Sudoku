#include "test.h"
#include "terrain.h"

int test_horizontal(int y) {
        int array[9] = {0,0,0,0,0,0,0,0,0};
        for(int i = 0; i < 9; i++)
                if(case_get(i,y) != 0 && array[case_get(i,y)]++ != 0)
                        return case_get(i,y);
        return 0;
}
int test_vertical(int x) {
        int array[9] = {0,0,0,0,0,0,0,0,0};
        for(int i = 0; i < 9; i++)
                if(case_get(x,i) != 0 && array[case_get(x,i)]++ != 0)
                        return case_get(x,i);
        return 0;
}
int test_square(int x, int y) {
        int array[10] = {0,0,0,0,0,0,0,0,0,0};
        int xs = (int)(x / 3) * 3;
        int ys = (int)(y / 3) * 3;
        for(int i = 0; i < 3; i++)
                for(int j = 0; j < 3; j++)
                        if(case_get(xs+i,ys+j) != 0 && array[case_get(xs+i,ys+j)]++ != 0)
                                return case_get(xs+i,ys+j);
        return 0;
}
int test_end() {
        for(int y = 0; y < 9; y++)
                if(test_horizontal(y))
                        return 0;
        for(int x = 0; x < 9; x++)
                if(test_vertical(x))
                        return 0;
        for(int x = 0; x < 3; x++)
                for(int y = 0; y < 3; y++)
                        if(test_square(x * 3,y * 3))
                                return 0;
        for(int x = 0; x < 9; x++)
                for(int y = 0; y < 9; y++)
                        if(case_get(x,y) == 0)
                                return 0;
        return 1;
}
