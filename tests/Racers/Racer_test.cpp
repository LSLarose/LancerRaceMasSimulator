#include <gtest/gtest.h>
#include "../../src/Racers/Racer.h"

const int HASE_TEST_VAL = 3;

TEST(TestGetters, Hull_Normal) {
    Racer racer = Racer(Personality::unavailable, HASE_TEST_VAL,0,0,0);
    
    EXPECT_EQ(racer.getHull(), HASE_TEST_VAL);
}

TEST(TestGetters, Agility_Normal) {
    Racer racer = Racer(Personality::unavailable, 0, HASE_TEST_VAL, 0, 0);

    EXPECT_EQ(racer.getAgility(), HASE_TEST_VAL);
}

TEST(TestGetters, Systems_Normal) {
    Racer racer = Racer(Personality::unavailable, 0, 0, HASE_TEST_VAL, 0);

    EXPECT_EQ(racer.getSystems(), HASE_TEST_VAL);
}

TEST(TestGetters, Engineering_Normal) {
    Racer racer = Racer(Personality::unavailable, 0, 0, 0, HASE_TEST_VAL);

    EXPECT_EQ(racer.getEngineering(), HASE_TEST_VAL);
}

TEST(TestSetters, Hull) {
    Racer racer = Racer();
    racer.setHull(HASE_TEST_VAL);
    EXPECT_EQ(racer.getHull(), HASE_TEST_VAL);
}

TEST(TestSetters, Agility) {
    Racer racer = Racer();
    racer.setAgility(HASE_TEST_VAL);
    EXPECT_EQ(racer.getAgility(), HASE_TEST_VAL);
}

TEST(TestSetters, Systems) {
    Racer racer = Racer();
    racer.setSystems(HASE_TEST_VAL);
    EXPECT_EQ(racer.getSystems(), HASE_TEST_VAL);
}

TEST(TestSetters, Engineering) {
    Racer racer = Racer();
    racer.setEngineering(HASE_TEST_VAL);
    EXPECT_EQ(racer.getEngineering(), HASE_TEST_VAL);
}