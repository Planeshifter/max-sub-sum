#include "maxSum.h"
#include "gtest/gtest.h"

TEST(maxSum, Positive) {
  float input_pos[3] = {1.0, 2.0, 3.0};
  EXPECT_EQ(6.0, maxSubSum(input_pos,3));
}


TEST(maxSum, Negative) {
  float input_pos[3] = {-1.0, -2.0, -3.0};
  EXPECT_EQ(0, maxSubSum(input_pos,3));
}

TEST(maxSum, Mix) {
  float input_pos[4] = {-1.0, 2.0, 3.0, -3.0};
  EXPECT_EQ(5.0, maxSubSum(input_pos, 4));
}
