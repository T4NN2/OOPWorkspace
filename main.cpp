#include <iostream>

using namespace std;

enum CoinState {
    HEADS,
    TAILS,
    SIDE
};

class Coin {
    public:
        CoinState getState() const {
            return CoinState::HEADS;
        }
};

int main() {
 Coin c;

 CoinState state = c.getState();
 switch(state) {
    case CoinState::HEADS:
        cout << "The coin is showing heads." << endl;
        break;
    case CoinState::TAILS:
        cout << "The coin is showing tails." << endl;
        break;
    default:
        cout << "The coin is on its side." << endl;
        break;
 }
}