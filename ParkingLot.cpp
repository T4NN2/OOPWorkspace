#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < currentCount; ++i)
        delete vehicles[i];
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return currentCount;
}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full\n";
        delete v;
        return;
    }
    vehicles[currentCount++] = v;
}

void ParkingLot::unparkVehicle(int id) {
    int index = -1;
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        std::cout << "Vehicle not in the lot\n";
        return;
    }

    delete vehicles[index];
    for (int i = index; i < currentCount - 1; ++i)
        vehicles[i] = vehicles[i + 1];
    --currentCount;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            ++count;
        }
    }
    return count;
}