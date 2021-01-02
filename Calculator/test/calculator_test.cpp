//
// Created by Wolf on 31.12.20.
//

#include "calculator.h"
#include "unity.h"

Calculator calculator;

void setUp(void) {
}

void tearDown(void) {
}

void test_add(void) {
    TEST_ASSERT_EQUAL(5, calculator.add(2,3));
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL(6, calculator.multiply(2,3));
}

int main() {
    UnityBegin("test/calculator_test.cpp");
    RUN_TEST(test_add);
    RUN_TEST(test_multiply);
    return (UnityEnd());
}
