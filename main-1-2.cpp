#include <iostream>
#include "Gradebook.h"

int main() {
    Gradebook gradebook;

    // Add a grade
    gradebook.addGrade(1884670, 1234, "assign 1", 90);

    // Get and print grades
    std::vector<Grade> grades = gradebook.get_grades();
    for (const Grade& grade : grades) {
        std::cout << "Student ID:" << grade.get_student_id() << "\n";
        std::cout << "Course ID:" << grade.get_course_id() << "\n";
        std::cout << "Assignment:" << grade.get_assignment() << "\n";
        std::cout << "Value:" << grade.get_value() << "\n";
    }

    return 0;
}
