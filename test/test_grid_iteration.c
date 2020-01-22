#include "unity_fixture.h"
#include "life.h"
#include "Arduino.h"

TEST_GROUP(GridIteration);

TEST_SETUP(GridIteration) {}

TEST_TEAR_DOWN(GridIteration) {}

TEST(GridIteration, single_live_cell_with_no_live_neighbors_will_die)
{
    /*
    int startingGrid[32][64] = {{        
        {0,0,0},
        {0,1,0},
        {0,0,0}
    };

    };

        int expectedGrid[32][64] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };*/



    board_t main_grid = {
        .board = { 
            {0,0,0},
            {0,1,0},
            {0,0,0}
        }
    };

    main_grid.board[0][0] = 1;

    // TEST_ASSERT_EQUAL_INT32_ARRAY(unitLifeCycle(startingGrid),expectedGrid, (32*64));
}

TEST_GROUP_RUNNER(GridIteration)
{
    RUN_TEST_CASE(GridIteration, single_live_cell_with_no_live_neighbors_will_die);
}
