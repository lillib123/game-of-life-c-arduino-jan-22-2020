#include "unity_fixture.h"
#include "life.h"
#include "Arduino.h"

TEST_GROUP(GridIteration);

TEST_SETUP(GridIteration) {}

TEST_TEAR_DOWN(GridIteration) {}

TEST(GridIteration, rules_work_through_iteration)
{
    board_t main_grid = {
        .board = { 
            {1,1,1,0},
            {0,1,1,0},
            {0,0,0,0},
            {0,0,1,1}
        }
    };

        board_t expected_grid = {
        .board = { 
            {1,0,1,0},
            {1,0,1,0},
            {0,1,0,1},
            {0,0,0,0}
        }
    };

    main_grid.board[0][0] = 1;

    TEST_ASSERT_EQUAL_UINT8_ARRAY(unitLifeCycle(main_grid.board),expected_grid.board, (32*64));
}

TEST_GROUP_RUNNER(GridIteration)
{
    RUN_TEST_CASE(GridIteration, rules_work_through_iteration);
}
