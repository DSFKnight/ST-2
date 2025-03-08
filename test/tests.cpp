// Copyright 2025 Alexey Gromov

#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include "circle.h"
#include "tasks.h"

const double PI = 3.14159265359;
const double EPSILON = 0.0001;

#define ASSERT_NEAR_CUSTOM(val1, val2) \
    ASSERT_TRUE(std::fabs((val1) - (val2)) < EPSILON)

class CircleTest : public ::testing::Test {
 protected:
    Circle c;
};

TEST_F(CircleTest, DefaultConstructor) {
    ASSERT_NEAR_CUSTOM(c.getRadius(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getArea(), 0.0);
}

TEST_F(CircleTest, SetRadius1) {
    c.setRadius(1.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 1.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 2 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), PI);
}

TEST_F(CircleTest, SetFerence1) {
    c.setFerence(2 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 1.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 2 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), PI);
}

TEST_F(CircleTest, SetArea1) {
    c.setArea(PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 1.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 2 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), PI);
}

TEST_F(CircleTest, SetRadius2) {
    c.setRadius(2.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 2.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 4 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 4 * PI);
}

TEST_F(CircleTest, SetFerence2) {
    c.setFerence(4 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 2.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 4 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 4 * PI);
}

TEST_F(CircleTest, SetArea2) {
    c.setArea(4 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 2.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 4 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 4 * PI);
}

TEST_F(CircleTest, SetRadiusZero) {
    c.setRadius(0.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getArea(), 0.0);
}

TEST_F(CircleTest, SetFerenceZero) {
    c.setFerence(0.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getArea(), 0.0);
}

TEST_F(CircleTest, SetAreaZero) {
    c.setArea(0.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 0.0);
    ASSERT_NEAR_CUSTOM(c.getArea(), 0.0);
}

TEST_F(CircleTest, SetRadius5) {
    c.setRadius(5.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 5.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 10 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 25 * PI);
}

TEST_F(CircleTest, SetFerence5) {
    c.setFerence(10 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 5.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 10 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 25 * PI);
}

TEST_F(CircleTest, SetArea5) {
    c.setArea(25 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 5.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 10 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 25 * PI);
}

TEST_F(CircleTest, SetRadius10) {
    c.setRadius(10.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 10.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 20 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 100 * PI);
}

TEST_F(CircleTest, SetFerence10) {
    c.setFerence(20 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 10.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 20 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 100 * PI);
}

TEST_F(CircleTest, SetArea10) {
    c.setArea(100 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 10.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 20 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 100 * PI);
}

TEST_F(CircleTest, SetRadiusHalf) {
    c.setRadius(0.5);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 0.5);
    ASSERT_NEAR_CUSTOM(c.getFerence(), PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 0.25 * PI);
}

TEST_F(CircleTest, SetFerenceHalf) {
    c.setFerence(PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 0.5);
    ASSERT_NEAR_CUSTOM(c.getFerence(), PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 0.25 * PI);
}

TEST_F(CircleTest, SetAreaHalf) {
    c.setArea(0.25 * PI);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 0.5);
    ASSERT_NEAR_CUSTOM(c.getFerence(), PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 0.25 * PI);
}

TEST_F(CircleTest, SetRadius3) {
    c.setRadius(3.0);
    ASSERT_NEAR_CUSTOM(c.getRadius(), 3.0);
    ASSERT_NEAR_CUSTOM(c.getFerence(), 6 * PI);
    ASSERT_NEAR_CUSTOM(c.getArea(), 9 * PI);
}
