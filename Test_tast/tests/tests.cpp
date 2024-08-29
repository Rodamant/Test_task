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


TEST(Vector, PushBack) {
    Vector a;
    a.PushBack(4);
    ASSERT_EQ(a[0], 4);
    ASSERT_EQ(a.Size(), 1);
}

TEST(Vector, PushBack_AddBack) {
    Vector a;
    a.PushBack(1);
    ASSERT_EQ(a[0], 1);
    a.PushBack(2);
    ASSERT_EQ(a[1], 2);
    a.PushBack(3);
    ASSERT_EQ(a[2], 3);
    a.PushBack(4);
    ASSERT_EQ(a[3], 4);
    ASSERT_EQ(a.Size(), 4);
}
