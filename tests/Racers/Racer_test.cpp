#include <gtest/gtest.h>
#include "../../src/Racers/Racer.h"

const int HASE_TEST_VAL = MAX_HASE_BONUS/2;

TEST(TestGetters, Hull_Normal) {
    Racer racer = Racer(Personality::unavailable, HASE_TEST_VAL,0,0,0);
    
    EXPECT_EQ(racer.getHull(), HASE_TEST_VAL);
}

TEST(TestGetters, Hull_Min) {
    Racer racer = Racer(Personality::unavailable, MIN_HASE_BONUS-HASE_TEST_VAL, 0, 0, 0);

    EXPECT_EQ(racer.getHull(), MIN_HASE_BONUS);
}

TEST(TestGetters, Hull_Max) {
    Racer racer = Racer(Personality::unavailable, MAX_HASE_BONUS+HASE_TEST_VAL, 0, 0, 0);

    EXPECT_EQ(racer.getHull(), MAX_HASE_BONUS);
}

TEST(TestGetters, Agility_Normal) {
    Racer racer = Racer(Personality::unavailable, 0, HASE_TEST_VAL, 0, 0);

    EXPECT_EQ(racer.getAgility(), HASE_TEST_VAL);
}
TEST(TestGetters, Agilityl_Min) {
    Racer racer = Racer(Personality::unavailable, 0, MIN_HASE_BONUS - HASE_TEST_VAL, 0, 0);

    EXPECT_EQ(racer.getAgility(), MIN_HASE_BONUS);
}

TEST(TestGetters, Agility_Max) {
    Racer racer = Racer(Personality::unavailable, 0, MAX_HASE_BONUS + HASE_TEST_VAL, 0, 0);

    EXPECT_EQ(racer.getAgility(), MAX_HASE_BONUS);
}

TEST(TestGetters, Systems_Normal) {
    Racer racer = Racer(Personality::unavailable, 0, 0, HASE_TEST_VAL, 0);

    EXPECT_EQ(racer.getSystems(), HASE_TEST_VAL);
}

TEST(TestGetters, Systems_Min) {
    Racer racer = Racer(Personality::unavailable, 0, 0, MIN_HASE_BONUS - HASE_TEST_VAL, 0);

    EXPECT_EQ(racer.getSystems(), MIN_HASE_BONUS);
}

TEST(TestGetters, Systems_Max) {
    Racer racer = Racer(Personality::unavailable, 0, 0, MAX_HASE_BONUS + HASE_TEST_VAL, 0);

    EXPECT_EQ(racer.getSystems(), MAX_HASE_BONUS);
}

TEST(TestGetters, Engineering_Normal) {
    Racer racer = Racer(Personality::unavailable, 0, 0, 0, HASE_TEST_VAL);

    EXPECT_EQ(racer.getEngineering(), HASE_TEST_VAL);
}

TEST(TestGetters, Engineering_Min) {
    Racer racer = Racer(Personality::unavailable, 0, 0, 0, MIN_HASE_BONUS - HASE_TEST_VAL);

    EXPECT_EQ(racer.getEngineering(), MIN_HASE_BONUS);
}

TEST(TestGetters, Engineering_Max) {
    Racer racer = Racer(Personality::unavailable, 0, 0, 0, MAX_HASE_BONUS + HASE_TEST_VAL);

    EXPECT_EQ(racer.getEngineering(), MAX_HASE_BONUS);
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