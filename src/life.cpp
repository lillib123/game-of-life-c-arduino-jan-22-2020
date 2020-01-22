#include "life.h"
#include <stdlib.h>
#include "Arduino.h"
#include "ledmatrix.h"

void life_setup(void *matrix)
{
    int seed = analogRead(A7);
    if (seed < 0)
    {
        seed = -1 * seed;
    }
    srand(seed);

    led_begin(matrix);

    bool v;
    uint16_t livecolor = led_color(127, 127, 127);
    uint16_t deadcolor = led_color(0, 0, 0);

}

void life_loop(void *matrix)
{
}

int rules(int cell, int numberOfNeighbors) {
    if (cell == 1) {
            if (numberOfNeighbors == 2 || numberOfNeighbors == 3) {
            return 1;
        }
        return 0;
    }
    else {
        if (numberOfNeighbors == 3)
            return 1;
        else {
            return 0;
        }
    }    
};

int getNumberOfNeighbors(int grid[32][64], int row, int column)
{
    int live_sum = 0;

    int i_start = (row-1 <= -1 ? 0 : row-1);
    int j_start = (column-1 <= -1 ? 0 : column-1);
    int j_end = column+1 >= 64 ? 63 : column+1;
    int i_end = row+1 >= 32 ? 31 : row+1;

    for (int i = i_start; i<=i_end; i++){
        for (int j = j_start; j<=j_end; j++){
            live_sum += grid[i][j];
        }
    }
    live_sum -= grid[row][column];
    return live_sum;
}
