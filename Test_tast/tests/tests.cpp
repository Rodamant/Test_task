#include <gtest/gtest.h>

#include "example.h"

TEST(Example, Sum) {
    ASSERT_EQ(sum(2, 2), 4);
}
