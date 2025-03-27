#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl);
int main() {
    // Create an instance of PersonList
    PersonList pl;
    pl.numPeople = 3; // Set the number of people
    pl.people = new Person[pl.numPeople]; // Allocate memory for the people

    // Populate the PersonList
    pl.people[0].name = "Alice";
    pl.people[0].age = 30;
    pl.people[1].name = "Bob";
    pl.people[1].age = 25;
    pl.people[2].name = "Charlie";
    pl.people[2].age = 35;

    // Create a deep copy of the PersonList
    PersonList copiedPl = deepCopyPersonList(pl);

    // Print the original PersonList
    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < pl.numPeople; ++i) {
        std::cout << "Name: " << pl.people[i].name << ", Age: " << pl.people[i].age << std::endl;
    }

    // Print the copied PersonList
    std::cout << "Copied PersonList:" << std::endl;
    for (int i = 0; i < copiedPl.numPeople; ++i) {
        std::cout << "Name: " << copiedPl.people[i].name << ", Age: " << copiedPl.people[i].age << std::endl;
    }

    // Clean up allocated memory
    delete[] pl.people;
    delete[] copiedPl.people;

    return 0;
}
