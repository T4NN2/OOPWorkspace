#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);
    int idCounter = 1;

    while (lot.getCount() < 10) {
        std::cout << "Enter vehicle type to park (car, bus, bike): ";
        std::string type;
        std::cin >> type;

        if (type == "car")
            lot.parkVehicle(new Car(idCounter++));
        else if (type == "bus")
            lot.parkVehicle(new Bus(idCounter++));
        else if (type == "bike")
            lot.parkVehicle(new Motorbike(idCounter++));
        else
            std::cout << "Invalid type. Try again.\n";
    }

    int unparkID;
    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> unparkID;
    lot.unparkVehicle(unparkID);

    return 0;
}
