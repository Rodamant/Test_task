#include <gtest/gtest.h>
#include "vector.h"

#include "example.h"

TEST(Example, Sum) {
    ASSERT_EQ(sum(2, 2), 4);
}

TEST(Example, Multiplication) {
    ASSERT_EQ(multiplication(3, 3), 9);
}

TEST(Vector, DefaultConstructor) {
    Vector a;
    ASSERT_EQ(a.Size(), 0);
}

