#ifndef Menu_H
#define Menu_H

#include <map>
#include <string>

class Course;

class Menu
{
public:
    Menu();
    bool addCourse(Course* course);
    bool addMenuItem(const std::string& courseDescription, const std::string& description, float price, int stock);
    void printMenu() const;
    void inventory() const;
    float orderItem(const std::string& courseDescription, char item);
    bool isCoursesEmpty() const;
    void closeShop();
    ~Menu();
private:
    std::map<std::string, Course*> courses;


};

#endif
