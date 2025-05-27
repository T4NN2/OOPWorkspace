#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

int main() {
    // Create student and instructor
    Student* student = new Student("Seb", 1884670);
    Instructor* instructor = new Instructor("Dr.V");

    // Create course
    Course course(1234, "OOP");

    // Add persons to course
    course.addPerson(student);
    course.addPerson(instructor);

    // Get and print persons in course
    std::vector<Person*> people = course.get_persons();
    for (Person* person : people) {
        std::string name = person->get_name();
        Student* s = dynamic_cast<Student*>(person);
        if (s) {
            std::cout << "Name of Student:" << name << "\n";
            std::cout << "Id of Student:" << s->get_id() << "\n";
        } else {
            std::cout << "Name of Instructor:" << name << "\n";
        }
    }

    // Clean up
    delete student;
    delete instructor;

    return 0;
}
