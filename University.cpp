#include "University.h"

University::University() {
    gradebook = new Gradebook();
}

University::~University() {
    delete gradebook;
}

void University::addCourse(int id, std::string name) {
    courses.push_back(Course(id, name));
}

Gradebook* University::get_gradebook() {
    return gradebook;
}

std::vector<Course>& University::get_courses() {
    return courses;
}
