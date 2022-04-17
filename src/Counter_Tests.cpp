/*
 * Counter_Tests.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: Kavian
 */
#include "gtest/gtest.h"

#include "Counter.hpp"

TEST(Counter, Increment) {
      Counter c;
      EXPECT_EQ(0, c.Increment());
      EXPECT_EQ(1, c.Increment());
      EXPECT_EQ(2, c.Increment());
      EXPECT_TRUE(true);
}

int main(int argc, char **argv) {
      ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
}
