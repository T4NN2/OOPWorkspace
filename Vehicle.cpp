#include "Vehicle.h"

Vehicle::Vehicle(int id) : id(id) {
    timeOfEntry = std::time(nullptr);
}

int Vehicle::getID() const {
    return id;
}
