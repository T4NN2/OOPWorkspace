#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    // Update read function with exception handling
    void read(Records &records) {
        _file.open(_filename, ios::in);

        if (!_file.is_open()) {
            throw runtime_error("File could not be opened");
        }

        string line;
        while (getline(_file, line)) {
            try {
                int value = stoi(line);
                records.push_back(value);
            } catch (const invalid_argument&) {
                cout << "Warning: invalid input skipped: " << line << endl;
                // skip invalid line
            } catch (const out_of_range&) {
                cout << "Warning: out of range input skipped: " << line << endl;
                // skip out of range line
            }
        }
        _file.close();
    }
};

int main(int argc, char* argv[]) {
    Records myRecords;

    string filename = "records.txt";
    if (argc > 1) filename = argv[1];

    RecordsManager recordM(filename); 
        
    try {
        recordM.read(myRecords);
    } catch (const exception& e) {
        cout << "Exception caught in main: " << e.what() << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 0; i < myRecords.size(); i++) {
        sum += myRecords[i];
    }
    cout << sum << endl;


    return 0;
}
