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

        try {
            if (!_file.is_open()) {
                throw runtime_error("File could not be opened");
            }

            string line;
            while (getline(_file, line)) {
                try {
                    int value = stoi(line);
                    records.push_back(value);
                } catch (const invalid_argument&) {
                    cout << "invalid_argument error" << endl;
                    throw;
                } catch (const out_of_range&) {
                    cout << "out_of_range error" << endl;
                    throw;
                }
            }
        } catch (const runtime_error&) {
            cout << "runtime_error error" << endl;
            throw;
        } catch (const exception& e) {
            cout << "exception error" << endl;
            throw;
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
