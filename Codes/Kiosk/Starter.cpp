#include "Starter.h"
#include <iostream>

Starter::Starter(int maxNumberOfItems) : 
Course("Starter", maxNumberOfItems) {}

void Starter::recommendBeverage() const {
    std::cout << "Sparkling Water" << std::endl;
}
