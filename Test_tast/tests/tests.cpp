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
    a.PushBack(2);
    a.PushBack(3);
    a.PushBack(4);
    ASSERT_EQ(a[3], 4);
    ASSERT_EQ(a.Size(), 4);
}

TEST(Vector, Clear) {
    Vector a;
    a.PushBack(4);
    a.PushBack(5);
    ASSERT_EQ(a.Size(), 2);
    a.Clear();
    ASSERT_EQ(a.Size(), 0);
}

TEST(Vector, PushFront) {
    Vector a;

    a.PushBack(2);
    a.PushFront(3);
    a.PushFront(4);
    ASSERT_EQ(a[0], 4);
    ASSERT_EQ(a.Size(), 3);
}

TEST(Vector, PopBack) {
    Vector a;

    a.PushBack(2);
    a.PushBack(3);
    a.PushBack(4);
    ASSERT_EQ(a.Size(), 3);
    a.PopBack();
    ASSERT_EQ(a.Size(), 2);
    ASSERT_EQ(a[1], 3);
}

TEST(Vector, Insert)
{
    Vector a;

    a.PushBack(1);
    a.PushBack(2);
    a.PushBack(3);
    a.PushBack(5);
    a.Insert(3, 4);
    ASSERT_EQ(a[3], 4);
}

TEST(Vector, Insert_index0)
{
    Vector a;

    a.Insert(0, 4);
    ASSERT_EQ(a[0], 4);
}

TEST(Vector, Insert_index_last)
{
    Vector a;

    a.PushBack(1);
    a.PushBack(2);
    a.PushBack(3);
    a.PushBack(5);
    a.Insert(4, 4);
    ASSERT_EQ(a[4], 4);
}

TEST(Vector, Insert_index_empty_vector)
{
    Vector a;

    a.Insert(0, 1);
    ASSERT_EQ(a[0], 1);
}

TEST(Vector, Insert_KeepOrder)
{
    Vector a;

 
    a.PushBack(5);
    a.Insert(0, 4);
    ASSERT_EQ(a[1], 5);
}

TEST(Vector, Erase)
{
    Vector a;

    a.PushBack(5);
    a.Erase(0);
    ASSERT_EQ(a.Size(),0);
}
