#include <gtest/gtest.h>
#include <cmath>
#include "../include/main.h"

TEST(SumTest, Sum1_Test) {
  const int N = 15;
  double expected = SumIter(N);
  double result = Sum1(N, N);
  EXPECT_NEAR(result, expected, 1e-6);
}

// Тестуємо функцію Sum2
TEST(SumTest, Sum2_Test) {
  const int N = 15;
  double expected = SumIter(N);
  double result = Sum2(1, N);
  EXPECT_NEAR(result, expected, 1e-6);
}

// Тестуємо функцію Sum3
TEST(SumTest, Sum3_Test) {
  const int N = 15;
  double expected = SumIter(N);
  double result = Sum3(N, N, 0);
  EXPECT_NEAR(result, expected, 1e-6);
}

TEST(SumTest, Sum4_Test) {
  const int N = 15;
  double expected = SumIter(N);
  double result = Sum4(1, N, 0);
  EXPECT_NEAR(result, expected, 1e-6);
}

TEST(SumTest, SumIter_Test) {
  const int N = 15;
  double expected = SumIter(N);
  double result = SumIter(N);
  EXPECT_NEAR(result, expected, 1e-6);
}

