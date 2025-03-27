#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Initialize a PersonList
    PersonList pl;
    pl.numPeople = 2; // Example number of people
    pl.people = new Person[pl.numPeople]; // Allocate memory for people

    // Populate the PersonList
    pl.people[0] = {"Alice", 30};
    pl.people[1] = {"Bob", 25};

    // Create a shallow copy
    PersonList copiedPl = shallowCopyPersonList(pl);

    // Print the results to verify
    for (int i = 0; i < copiedPl.numPeople; ++i) {
        std::cout << "Name: " << copiedPl.people[i].name << ", Age: " << copiedPl.people[i].age << std::endl;
    }

    // Clean up allocated memory
    delete[] pl.people; // Free original array
    // Note: copiedPl.people points to the same array, so we don't delete it here

    return 0;
}
