#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include <vector>
#include "Course.h"
#include "Gradebook.h"

class University {
private:
    std::string name;
    std::string location;
    Gradebook* gradebook;
    std::vector<Course> courses;
public:
    University();
    ~University();
    void addCourse(int id, std::string name);
    Gradebook* get_gradebook();
    std::vector<Course>& get_courses();
};

#endif