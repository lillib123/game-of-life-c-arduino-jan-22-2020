#ifndef _LIFE_H_
#define _LIFE_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define BOARDX 64
#define BOARDY 32

    typedef struct {
        uint8_t board[32][64];
    } board_t;

    void life_setup(void *);
    void life_loop(void *);
    int rules(int cell, int numberOfNeighbors);
    int getNumberOfNeighbors(board_t *grid, int row, int column);
    board_t* unitLifeCycle(int *grid);

#ifdef __cplusplus
}
#endif

#endif