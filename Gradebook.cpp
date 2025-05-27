#include "Gradebook.h"

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value) {
    grades.push_back(Grade(stud_id, course_id, assignment, value));
}

std::vector<Grade> Gradebook::get_grades() const {
    return grades;
}