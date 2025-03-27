#include <iostream>
#include "Person.h"

Person* createPersonArray(int n); // Function prototype

int main() {
    int n = 5; // Example size
    Person* persons = createPersonArray(n); 

    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << persons[i].name << ", Age: " << persons[i].age << std::endl;
    }

    delete[] persons; // Clean up allocated memory
    return 0;
}
