#include <limits.h>
#include "aphw2.h"
#include "classroom.h"
#include "floor.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "gtest/gtest.h"
namespace
{
/*
TEST(APHW2Test1, classroomTest0)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    EXPECT_EQ(3, Classroom::no);    
}

TEST(APHW2Test, classroomTest1)
{
    Classroom c("411", 60);
    EXPECT_EQ(60, c.noOfSeats());   
} 

TEST(APHW2Test, classroomTest2)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    EXPECT_EQ(a->getLeft(), c);
}

TEST(APHW2Test, classroomTest3)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4[1], b);
}

TEST(APHW2Test, floorTest4)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4[-1], c);
}

TEST(APHW2Test, floorTest5)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4[16], b);
}

TEST(APHW2Test, floorTest6)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4.noOfSeats(), 90);
}
TEST(APHW2Test, floorTest7)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    f4.moveSeats(0, 1, 10);
    EXPECT_EQ(f4[0]->noOfSeats(), 30);
}
*/
}
