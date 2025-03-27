#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newPl; 
    newPl.numPeople = pl.numPeople; // Copy the number of people
    newPl.people = pl.people; 
    return newPl; 
}
