#include <gtest/gtest.h>

int multiply(int a, int b)
{
    return a*b;
}

TEST(TestMultiply, Zero)
{
    EXPECT_EQ(12, multiply(3, 4));
}
