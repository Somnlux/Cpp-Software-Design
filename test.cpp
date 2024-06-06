
#include <gtest/gtest.h>
#include "Circle.h"
#include "Square.h"
#include "Shape.h"

TEST(ShapeTest, CircleArea) {
    Circle circle(5);
    EXPECT_NEAR(circle.area(), 78.54, 0.01);
}

TEST(ShapeTest, SquareArea) {
    Square square(4);
    EXPECT_EQ(square.area(), 16);
}

TEST(ShapeTest, ShapeArea) {
    Shape* shape = new Circle(3);
    EXPECT_NEAR(shape->area(), 28.27, 0.01);
    delete shape;

    shape = new Square(2);
    EXPECT_EQ(shape->area(), 4);
    delete shape;
}
