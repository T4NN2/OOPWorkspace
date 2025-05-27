#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <vector>
#include "Person.h"

class Course {
private:
    std::string name;
    int id;
    std::vector<Person*> persons;
public:
    Course(int id, std::string name);
    void addPerson(Person* p);
    std::vector<Person*> get_persons();
    int get_id() const;
};

#endif
