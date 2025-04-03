#include "House.h"
using namespace std;

House::House() : ownerName(""), lotNumber(0) {}

House::House(string ownerName, int lotNumber) : ownerName(ownerName), lotNumber(lotNumber) {}

std::string House::get_owner_name() {
    return ownerName;
}

int House::get_lot_number() {
    return lotNumber;
}
