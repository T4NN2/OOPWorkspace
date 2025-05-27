#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
    protected:
    string name;

    public:
    // Constructor
    Person(const string& name) : name(name) {}
    // Virtual destructor
    virtual ~Person() {}
    std::string get_name() const;
};
    #endif