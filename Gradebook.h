#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <vector>
#include "Grade.h"

class Gradebook {
private:
    std::vector<Grade> grades;
public:
    void addGrade(int stud_id, int course_id, std::string assignment, int value);
    std::vector<Grade> get_grades() const;
};

#endif