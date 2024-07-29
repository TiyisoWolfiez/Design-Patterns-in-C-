#ifndef Course_H
#define Course_H

#include <vector>
#include <string>


class MenuItem;

class Course {

    protected:
        std::string description;
        int maxNumberOfItems;
        std::vector<MenuItem*> menuItems;

    public:
        Course(const std::string& description, int maxNumberOfItems);
        std::string getDescription();
        bool addMenuItem(const std::string& description, float price, int stock);
        MenuItem* getMenuItem(int index) const;

        void printMenuItems();
        void printInventory();
        virtual void recommendBeverage() const = 0;
        virtual ~Course();
};
#endif
