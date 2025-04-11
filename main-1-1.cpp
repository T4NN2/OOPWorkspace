#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numCars, numBuses, numBikes;
    std::vector<Vehicle*> vehicles;

    std::cout << "Enter number of cars: ";
    std::cin >> numCars;
    for (int i = 0; i < numCars; ++i)
        vehicles.push_back(new Car(i + 1));

    std::cout << "Enter number of buses: ";
    std::cin >> numBuses;
    for (int i = 0; i < numBuses; ++i)
        vehicles.push_back(new Bus(numCars + i + 1));

    std::cout << "Enter number of motorbikes: ";
    std::cin >> numBikes;
    for (int i = 0; i < numBikes; ++i)
        vehicles.push_back(new Motorbike(numCars + numBuses + i + 1));

    std::cout << "\nVehicle Parking Durations (seconds):\n";
    for (auto* v : vehicles) {
        std::cout << "Vehicle ID " << v->getID()
                  << " => Duration: " << v->getParkingDuration() << " sec\n";
    }

    for (auto* v : vehicles)
        delete v;

    return 0;
}
