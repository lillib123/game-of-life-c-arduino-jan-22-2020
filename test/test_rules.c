#include "unity_fixture.h"
#include "life.h"
#include "Arduino.h"

TEST_GROUP(Rules);

TEST_SETUP(Rules) {}

TEST_TEAR_DOWN(Rules) {}

TEST(Rules, lifesetup_seeds_srand_from_analogRead)
{
    analogRead_will_return(17);

    life_setup(NULL);
    TEST_ASSERT_EQUAL_INT(17, srand_called_with());
}

TEST(Rules, live_cell_with_fewer_than_two_live_neighbors_dies)
{
    TEST_ASSERT_EQUAL_INT(0, rules(1, 0));
}

TEST(Rules, live_cell_with_two_live_neighbors_lives)
{
    TEST_ASSERT_EQUAL_INT(1, rules(1, 2));
    
}

TEST(Rules, live_cell_with_three_live_neighbors_lives)
{
    TEST_ASSERT_EQUAL_INT(1, rules(1, 3));
}

TEST(Rules,live_cell_with_more_than_three_dies)
{
    TEST_ASSERT_EQUAL_INT(0,rules(1,4));
}

TEST(Rules, dead_cell_with_exactly_three_live_neighbors_comes_to_life)
{
    TEST_ASSERT_EQUAL_INT(1, rules(0,3));
}

TEST(Rules, dead_cell_with_two_live_neighbors_remains_dead)
{
    TEST_ASSERT_EQUAL_INT(0, rules(0,2));
}
TEST(Rules, dead_cell_with_four_live_neighbors_remains_dead)
{
    TEST_ASSERT_EQUAL_INT(0, rules(0,4));
}

TEST_GROUP_RUNNER(Rules)
{
    RUN_TEST_CASE(Rules, lifesetup_seeds_srand_from_analogRead)
    RUN_TEST_CASE(Rules, live_cell_with_fewer_than_two_live_neighbors_dies)
    RUN_TEST_CASE(Rules, live_cell_with_two_live_neighbors_lives)
    RUN_TEST_CASE(Rules, live_cell_with_three_live_neighbors_lives)
    RUN_TEST_CASE(Rules, live_cell_with_more_than_three_dies)
    RUN_TEST_CASE(Rules, dead_cell_with_exactly_three_live_neighbors_comes_to_life)
    RUN_TEST_CASE(Rules, dead_cell_with_two_live_neighbors_remains_dead)
    RUN_TEST_CASE(Rules, dead_cell_with_four_live_neighbors_remains_dead)
}
