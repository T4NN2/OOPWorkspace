#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <string>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int id;

public:
    Vehicle(int id);
    virtual ~Vehicle() = default;

    int getID() const;
    virtual int getParkingDuration() const = 0;
};

#endif // VEHICLE_H
