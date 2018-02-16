#ifndef _TERRAIN_H_
#define _TERRAIN_H_

const int terrain[9][9];
int layer[9][9];

extern void case_set(int x, int y, int i);
extern int case_get(int x, int y);
extern char case_convert(int i);

extern void terrain_print();

#endif /* _TERRAIN_H_ */
