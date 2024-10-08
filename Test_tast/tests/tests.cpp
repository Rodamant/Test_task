#include <gtest/gtest.h>
#include "vector.h"
#include "list.h"
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

    a.PushBack(3);
    a.PushBack(4);
    ASSERT_EQ(a[1], 4);
    ASSERT_EQ(a.Size(), 2);
}

TEST(Vector, Clear) {
    Vector a;
    a.PushBack(4);
    a.PushBack(5);
    ASSERT_EQ(a.Size(), 2);
    a.Clear();
    ASSERT_EQ(a.Size(), 0);
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

TEST(List, DefaultConstructor)
{
    List<int> lst;
    ASSERT_EQ(lst.GetSize(), 0);
}

TEST(List, PushBack)
{
    List<int> lst;
    lst.PushBack(1);
    ASSERT_EQ(lst[0], 1);
    ASSERT_EQ(lst.GetSize(), 1);
}

TEST(List, PushFront)
{
    List<int> lst;
    lst.PushFront(1);
    ASSERT_EQ(lst[0], 1);
    ASSERT_EQ(lst.GetSize(), 1);
}


TEST(List, PopFront)
{
    List<int> lst;
    lst.PushFront(1);
    lst.PopFront();
    ASSERT_EQ(lst.GetSize(), 0);
}

TEST(List, PopBack)
{
    List<int> lst;
    lst.PushFront(1);
    lst.PopBack();
    ASSERT_EQ(lst.GetSize(), 0);
}

TEST(List, RemoveAt)
{
    List<int> lst;
    lst.PushFront(1);
    lst.RemoveAt(0);
    ASSERT_EQ(lst.GetSize(), 0);
}

TEST(List, Clear)
{
    List<int> lst;
    lst.PushFront(1);
    lst.Clear();
    ASSERT_EQ(lst.GetSize(), 0);
}