#include "terrain_format.h"
#include <string.h>

chtype terrain_format[39][39];

void terrain_format_init() {
        chtype tmp [39][39] = {
{ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER,ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER,ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LLCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_LRCORNER,ACS_LLCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_LRCORNER,ACS_LLCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_LRCORNER},
{ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER,ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER,ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LLCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_LRCORNER,ACS_LLCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_LRCORNER,ACS_LLCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_LRCORNER},
{ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER,ACS_ULCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_TTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_URCORNER},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE,ACS_LTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_PLUS,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_RTEE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE,' ',' ',' ',ACS_VLINE},
{ACS_LLCORNER,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_BTEE,ACS_HLINE,ACS_HLINE,ACS_HLINE,ACS_LRCORNER
                },
        };
        memcpy(terrain_format,tmp,sizeof(chtype) * 39 * 39);
}
void terrain_format_print() {
        for(int x = 0; x < 39; x++)
                for(int y = 0; y < 39; y++)
                        mvaddch(y,x, terrain_format[y][x]);
}