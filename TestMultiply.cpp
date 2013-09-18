#include <gtest/gtest.h>

int multiply(int a, int b)
{
    int accum = 0;
    for (int i = 0; i < b; ++i) {
        accum += a;
    }

    return accum;
}

TEST(TestMultiply, Zero)
{
    EXPECT_EQ(0, multiply(0, 0));
}

TEST(TestMultiply, Nonzero)
{
    EXPECT_EQ(12, multiply(3, 4));
}

TEST(TestMultiply, OneNegative)
{
    EXPECT_EQ(-12, multiply(-3, 4));
}
