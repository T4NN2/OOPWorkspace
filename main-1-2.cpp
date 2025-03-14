#include <iostream>
using namespace std;
extern int is_identity(int array[10][10]);

int array[10] [10] = {{1, 2, 3, 4}, {2, 3, 4, 5}};

int main() {
    cout << (is_identity(array)) << endl;
    return 0;
}