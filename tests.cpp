#include <gtest/gtest.h>
#include "lab.h"

TEST(SumTest, TwoPlusThree) {
    int t;
    t = sum(2, 3);
    EXPECT_EQ(t, 5);
}
