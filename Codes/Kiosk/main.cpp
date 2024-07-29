#include "Menu.h"
#include "Starter.h"
#include "MenuItem.h"
#include <iostream>

int main() {
    // Create the Menu object
    Menu menu;

    // Create a Starter course
    Starter* starterCourse = new Starter(5);

    // Add the Starter course to the Menu
    if (menu.addCourse(starterCourse)) {
        std::cout << "Starter course added successfully." << std::endl;
    } else {
        std::cout << "Failed to add Starter course." << std::endl;
    }

    // Add MenuItems to the Starter course
    if (menu.addMenuItem("Starter", "Onion Soup", 35.99, 6)) {
        std::cout << "Onion Soup added successfully." << std::endl;
    } else {
        std::cout << "Failed to add Onion Soup." << std::endl;
    }

    if (menu.addMenuItem("Starter", "Caesar Salad", 45.99, 4)) {
        std::cout << "Caesar Salad added successfully." << std::endl;
    } else {
        std::cout << "Failed to add Caesar Salad." << std::endl;
    }

    // Print the menu
    std::cout << "\nMenu:" << std::endl;
    menu.printMenu();

    // Print the inventory
    std::cout << "\nInventory:" << std::endl;
    menu.inventory();

    // Order an item
    float price = menu.orderItem("Starter", 'a');
    if (price > 0.0f) {
        std::cout << "\nOrdered item 'a' from Starter, price: " << price << std::endl;
    } else {
        std::cout << "\nFailed to order item 'a' from Starter." << std::endl;
    }

    // Check if the menu is empty
    if (menu.isCoursesEmpty()) {
        std::cout << "\nThe menu is empty." << std::endl;
    } else {
        std::cout << "\nThe menu is not empty." << std::endl;
    }

    // Close the shop
    menu.closeShop();

    return 0;
}


// g++ -o main main.cpp Course.cpp Menu.cpp MenuItem.cpp Starter.cpp
// ./main
