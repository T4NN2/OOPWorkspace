#include <iostream>
#include "University.h"
#include "Student.h"

int main() {
    // Create university
    University uni;

    // Add a course
    uni.addCourse(1234, "OOP");

    // Create a student
    Student* student = new Student("Seb", 1884670);

    // Add student to course
    std::vector<Course>& courses = uni.get_courses();
    if (!courses.empty()) {
        courses[0].addPerson(student);
    }

    // Add grades for the student
    Gradebook* gb = uni.get_gradebook();
    gb->addGrade(1884670, 1234, "assign 1", 90);
    gb->addGrade(1884670, 1234, "assign 2", 85);
    gb->addGrade(1884670, 1234, "assign 3", 92);

    // Print grades
    std::vector<Grade> grades = gb->get_grades();
    for (const Grade& grade : grades) {
        std::cout << "Student ID:" << grade.get_student_id() << "\n";
        std::cout << "Course ID:" << grade.get_course_id() << "\n";
        std::cout << "Assignment:" << grade.get_assignment() << "\n";
        std::cout << "Value:" << grade.get_value() << "\n";
    }

    // Clean up
    delete student;

    return 0;
}
