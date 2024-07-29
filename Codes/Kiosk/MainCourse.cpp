#include "MainCourse.h"
#include <iostream>

MainCourse::MainCourse(int maxNumberOfItems) : Course("Main", maxNumberOfItems) {}

void MainCourse::recommendBeverage() const {
    std::cout <<"Coke"<<std::endl;
}
