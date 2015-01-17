#include "max-sub-sum.h"
#include "gtest/gtest.h"

TEST(maxSubSum, Positive) {
  float input_pos[4] = {1.0, 2.0, 3.0, 4.0};
  EXPECT_EQ(10.0, maxSubSum(input_pos, 4));
}


TEST(maxSubSum, Negative) {
  float input_pos[4] = {-1.0, -2.0, -3.0, -4.0};
  EXPECT_EQ(0.0, maxSubSum(input_pos, 4));
}

TEST(maxSubSum, Mix) {
  float input_pos[4] = {-1.0, 2.0, 3.0, -3.0};
  EXPECT_EQ(5.0, maxSubSum(input_pos, 4));
}

TEST(maxSubSum, Notes){
  float input_pos1[8] = {-1,1,-1,1,-1,1-1,1};
  EXPECT_EQ(1, maxSubSum(input_pos1, 8));

  float input_pos2[10] = {31,-41,59,26,-53,58,97,-93,-23,84};
  EXPECT_EQ(187, maxSubSum(input_pos2, 10));

  float input_pos3[8] = {1.2,2.4,-3.6,4.8,6.0,-2.0,7.2,-9.6};
  EXPECT_EQ(16.0, maxSubSum(input_pos3, 8));
}
