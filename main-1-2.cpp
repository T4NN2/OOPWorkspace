#include <iostream>
#include "Person.h"
using namespace std;


PersonList createPersonList(int n); // Function prototype

int main() {
    int n = 3; // size
    PersonList list = createPersonList(n);

    for (int i = 0; i < n; ++i) {
        cout << "Person " << i + 1<< ": " << list.people[i].name << ", Age: " << list.people[i].age << endl;
    } 

    delete[] list.people;
    return 0;
}
