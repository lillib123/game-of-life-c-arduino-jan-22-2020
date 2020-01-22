#include "unity_fixture.h"
#include "life.h"
#include "Arduino.h"

TEST_GROUP(Neighbors);

TEST_SETUP(Neighbors) {}

TEST_TEAR_DOWN(Neighbors) {}

TEST(Neighbors, read_grid_right_neighbor)
{

    board_t main_grid = {
        .board = { 
        {0, 0, 0},
        {0, 1, 1},
        {0, 0, 0}
        }
    };

    TEST_ASSERT_EQUAL_INT(1,getNumberOfNeighbors(&main_grid, 1, 1));
}

TEST(Neighbors, read_grid_right_neighbor_top_row)
{
    board_t main_grid = {
        .board = { 
        {0, 1, 1},
        {0, 1, 0},
        {0, 0, 0}
        }
    };

    TEST_ASSERT_EQUAL_INT(2,getNumberOfNeighbors(&main_grid, 1, 1));
}

TEST(Neighbors, count_neighbors_all_live)
{
    board_t main_grid = {
        .board = { 
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
        }
    };

    TEST_ASSERT_EQUAL_INT(8,getNumberOfNeighbors(&main_grid, 1, 1));
}

TEST(Neighbors, count_neighbors_from_top_left_corner)
{
    board_t main_grid = {
        .board = { 
        {0, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
        }
    };

    TEST_ASSERT_EQUAL_INT(3,getNumberOfNeighbors(&main_grid, 0, 0));
}

TEST(Neighbors, count_neighbors_from_bottom_right_corner)
{


    board_t main_grid = {
        .board = { 
        {0, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
        }
    };

    TEST_ASSERT_EQUAL_INT(0,getNumberOfNeighbors(&main_grid, 31, 63));
}

TEST(Neighbors, count_neighbors_from_bottom_left_corner)
{

    board_t main_grid = {};

    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 64; j++)
            main_grid.board[i][j] = 1;

    TEST_ASSERT_EQUAL_INT(3,getNumberOfNeighbors(&main_grid, 31, 0));
}



TEST_GROUP_RUNNER(Neighbors)
{
    RUN_TEST_CASE(Neighbors, read_grid_right_neighbor);
    RUN_TEST_CASE(Neighbors, read_grid_right_neighbor_top_row);
    RUN_TEST_CASE(Neighbors, count_neighbors_all_live);
    RUN_TEST_CASE(Neighbors, count_neighbors_from_top_left_corner);
    RUN_TEST_CASE(Neighbors, count_neighbors_from_bottom_right_corner);
    RUN_TEST_CASE(Neighbors, count_neighbors_from_bottom_left_corner);
    
}
