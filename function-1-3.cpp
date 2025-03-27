#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPl;
    newPl.people = new Person[pl.numPeople]; // Allocate mem for new arr

    for (int i = 0; i < pl.numPeople; ++i) {
        newPl.people[i].name = pl.people[i].name; // Copy name
        newPl.people[i].age = pl.people[i].age; // Copy age
    }
    newPl.numPeople = pl.numPeople;
    return newPl;
}