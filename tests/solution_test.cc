#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Rudrendu Mahindar | MS in ECE at USC ****";
  EXPECT_EQ(expected, actual);
}