#ifndef MenuItem_H
#define MenuItem_H

#include <string>

class MenuItem {
    public:
        MenuItem(const std::string& description, float price, int stock);
        std::string getDescription();
        float getPrice();
        int getStock();
        void reduceStock();

    private:
        std::string description;
        float price;
        int stock;
};
#endif
