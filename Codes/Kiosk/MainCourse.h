#ifndef MainCourse_H
#define MainCourse_H

#include "Course.h"

class MainCourse : public Course {
    public:
        MainCourse(int maxNumberOfItems);
        void recommendBeverage() const override;
};

#endif
