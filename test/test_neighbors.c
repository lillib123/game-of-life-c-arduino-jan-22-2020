#include "unity_fixture.h"
#include "life.h"
#include "Arduino.h"

TEST_GROUP(Neighbors);

TEST_SETUP(Neighbors) {}

TEST_TEAR_DOWN(Neighbors) {}

TEST(Neighbors, read_grid_right_neighbor)
{
    int grid[32][64] = {
        {0, 0, 0},
        {0, 1, 1},
        {0, 0, 0}
    };

    TEST_ASSERT_EQUAL_INT(1,getNumberOfNeighbors(grid, 1, 1));
}

TEST(Neighbors, read_grid_right_neighbor_top_row)
{
    int grid[32][64] = {
        {0, 1, 1},
        {0, 0, 0},
        {0, 0, 0}
    };

    TEST_ASSERT_EQUAL_INT(1,getNumberOfNeighbors(grid, 0, 1));
}



TEST_GROUP_RUNNER(Neighbors)
{
    RUN_TEST_CASE(Neighbors, read_grid_right_neighbor);
    RUN_TEST_CASE(Neighbors, read_grid_right_neighbor_top_row);
}
