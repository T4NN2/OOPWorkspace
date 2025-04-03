#include <iostream>
#include "House.h"
using namespace std;

int main() {
    House house("Nigga", 5);
    cout << "The owner of the house: " <<house.ownerName << " and the lot number is: " << house.lotNumber << endl;

    return 0;

}