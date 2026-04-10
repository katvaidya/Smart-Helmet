#include <iostream>
using namespace std;

int main() {
    int helmet, strap, alcohol;

    // Receiving data (simulated)
    cout << "Enter received data (helmet strap alcohol): ";
    cin >> helmet >> strap >> alcohol;

    // Logic
    if (helmet == 1 && strap == 1 && alcohol == 0) {
        cout << "Bike Started ✅" << endl;
    } else {
        cout << "Bike NOT Started ❌" << endl;
        cout << "Buzzer ON 🔊" << endl;
    }

    return 0;
}