#include "Dessert.h"
#include <iostream>

Dessert::Dessert(int maxNumberOfItems) : 
Course("Dessert", maxNumberOfItems) {}

void Dessert::recommendBeverage() const {
    std::cout <<"Coffee"<<std::endl;
}
