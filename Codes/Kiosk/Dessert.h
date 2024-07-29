#ifndef Dessert_H
#define Dessert_H

#include "Course.h"

class Dessert : public Course {
    public:
        Dessert(int maxNumberOfItems);
        void recommendBeverage() const override;
};
#endif
