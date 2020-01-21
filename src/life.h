#ifndef _LIFE_H_
#define _LIFE_H_

#ifdef __cplusplus
extern "C"
{
#endif

#define BOARDX 64
#define BOARDY 32

    void life_setup(void *);
    void life_loop(void *);
    int rules(int cell, int numberOfNeighbors);
    int getNumberOfNeighbors(int grid[32][64], int row, int column);
    //int getNumberOfNeighbors(int grid[32][64]);

#ifdef __cplusplus
}
#endif

#endif