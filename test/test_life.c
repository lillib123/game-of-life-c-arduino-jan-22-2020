#include "unity_fixture.h"
#include "life.h"
#include "Arduino.h"

TEST_GROUP(Life);

TEST_SETUP(Life) {}

TEST_TEAR_DOWN(Life) {}

TEST(Life, lifesetup_seeds_srand_from_analogRead)
{
    analogRead_will_return(17);

    life_setup(NULL);
    TEST_ASSERT_EQUAL_INT(17, srand_called_with());
}

TEST(Life, live_cell_with_fewer_than_two_live_neighbors_dies)
{
    TEST_ASSERT_EQUAL_INT(0, rules(1, 0));
}

TEST(Life, live_cell_with_two_live_neighbors_lives)
{
    TEST_ASSERT_EQUAL_INT(1, rules(1, 2));
}


TEST_GROUP_RUNNER(Life)
{
    RUN_TEST_CASE(Life, lifesetup_seeds_srand_from_analogRead)
    RUN_TEST_CASE(Life, live_cell_with_fewer_than_two_live_neighbors_dies)
    RUN_TEST_CASE(Life, live_cell_with_two_live_neighbors_lives)
}
