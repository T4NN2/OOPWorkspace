#include <iostream>
#include <thread>
#include <chrono>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);
    int id = 1;

    for (int i = 0; i < 5; ++i)
        lot.parkVehicle(new Car(id++));

    for (int i = 0; i < 3; ++i)
        lot.parkVehicle(new Bus(id++));

    for (int i = 0; i < 2; ++i)
        lot.parkVehicle(new Motorbike(id++));

    std::cout << "Simulating 20 seconds of parked time...\n";
    std::this_thread::sleep_for(std::chrono::seconds(20));

    int overstayers = lot.countOverstayingVehicles(15);
    std::cout << "Vehicles overstaying more than 15 seconds: " << overstayers << "\n";

    return 0;
}
