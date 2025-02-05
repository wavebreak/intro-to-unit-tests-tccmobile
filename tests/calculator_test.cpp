#include <gtest/gtest.h>
#include "../src/calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, AdditionWorks) {
    EXPECT_EQ(calc.add(2, 2), 4);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(0, 0), 0);
}

TEST_F(CalculatorTest, SubtractionWorks) {
    EXPECT_EQ(calc.subtract(2, 2), 0);
    EXPECT_EQ(calc.subtract(5, 3), 2);
    EXPECT_EQ(calc.subtract(1, -1), 2);
}

TEST_F(CalculatorTest, MultiplicationWorks) {
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-2, 3), -6);
    EXPECT_EQ(calc.multiply(0, 5), 0);
}

TEST_F(CalculatorTest, DivisionWorks) {
    EXPECT_EQ(calc.divide(6, 2), 3);
    EXPECT_EQ(calc.divide(5, 2), 2.5);
    EXPECT_THROW(calc.divide(1, 0), std::invalid_argument);
} 