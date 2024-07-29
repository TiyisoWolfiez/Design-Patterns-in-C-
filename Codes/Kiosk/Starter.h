#ifndef Starter_H
#define Starter_H

#include "Course.h"

class Starter : public Course {
    public:
        Starter(int maxNumberOfItems);
        void recommendBeverage() const override;
};

#endif 
