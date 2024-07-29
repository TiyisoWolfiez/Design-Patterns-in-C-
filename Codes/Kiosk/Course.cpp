#include "Course.h"
#include "MenuItem.h"
#include <iostream>

Course::Course(const std::string& description, int maxNumberOfItems)  {
    this->description = description;
    this->maxNumberOfItems = maxNumberOfItems;
}

std::string Course::getDescription() {
    return this->description;
}

bool Course::addMenuItem(const std::string& description, float price, int stock) {
    size_t mNOI =  static_cast<size_t>(maxNumberOfItems);
    if (menuItems.size() < mNOI) {
        menuItems.push_back(new MenuItem(description, price, stock));
        return true;
    }
    return false;
}

void Course::printMenuItems() {
    char index = 'a';
    for (const auto& item : menuItems) {
        std::cout << "\t" << index << ".\t" << item->getDescription() << std::endl;
        ++index;
    }
}

void Course::printInventory() {
    char index = 'a';
    for (const auto& item : menuItems) {
        std::cout << "\t" << index << ".\t" << item->getDescription()
                  << "\t" << item->getPrice() << "\t" << item->getStock() << std::endl;
        ++index;
    }
}

MenuItem* Course::getMenuItem(int index) const {
    int mI = static_cast<int>(menuItems.size());
    if (index >= 0 && index < mI) {
        return this->menuItems[index];
    }
    return nullptr;
}

Course::~Course() {
    for (auto item : menuItems) {
        delete item;
    }
}
