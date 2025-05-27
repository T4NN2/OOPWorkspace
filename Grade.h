#ifndef GRADE_H
#define GRADE_H
#include <string>

class Grade {
private:
    int student_id;
    int course_id;
    std::string assignment;
    int value;
public:
    Grade(int student_id, int course_id, std::string assignment, int value);
    int get_student_id() const;
    int get_course_id() const;
    std::string get_assignment() const;
    int get_value() const;
};

#endif