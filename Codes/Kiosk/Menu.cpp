#include "Menu.h"
#include "Course.h"
#include "MenuItem.h" 
#include <iostream>

Menu::Menu() {};

bool Menu::addCourse(Course* course) {
    const std::string& description = course->getDescription();

    if(courses.find(description) == courses.end()){
        courses[description] = course;
        return true;
    }
    return false;
}

bool Menu::addMenuItem(const std::string& courseDescription,const std::string& description, float price, int stock){
    auto it = courses.find(courseDescription);
    if (it != courses.end()) {
        return it->second->addMenuItem(description, price, stock);
    }
    return false;
}

void Menu::printMenu() const {
    for (const auto& pair : courses) {
        std::cout << pair.first << std::endl;
        pair.second->printMenuItems();
    }
}

void Menu::inventory() const {
    for (const auto& pair : courses) {
        std::cout << pair.first << std::endl;
        pair.second->printInventory();
    }
}

float Menu::orderItem(const std::string& courseDescription, char item) {
    auto it = courses.find(courseDescription);
    if (it != courses.end()) {
        int index = item - 'a';
        MenuItem* menuItem = it->second->getMenuItem(index);
        if (menuItem) {
            float price = menuItem->getPrice();
            menuItem->reduceStock();
            return price;
        }
    }
    return 0.0f;
}

bool Menu::isCoursesEmpty() const {
    return courses.empty();
}

void Menu::closeShop() {
    std::cout << "Closing shop. Deleting all " << courses.size() << " courses\n";
    for (auto& pair : courses) {
        delete pair.second;
    }
    courses.clear();
}

Menu::~Menu() {
    std::cout << "Menu destructor called\n";
    if (!courses.empty()) {
        closeShop();
    }
}
