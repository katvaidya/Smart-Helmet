#include <iostream>
using namespace std;

int main() {
    int fsrValue;
    int strapStatus;

    int fsrThreshold = 300;

    cout << "SMART HELMET SYSTEM (Simulation)\n";

    while (true) {

        // Simulated sensor inputs
        cout << "\nEnter FSR value: ";
        cin >> fsrValue;

        cout << "Enter Strap Status (1 = Fastened, 0 = Not): ";
        cin >> strapStatus;

        cout << "\nFSR: " << fsrValue 
             << " | Strap: " << strapStatus << endl;

        // Condition check
        if (fsrValue > fsrThreshold && strapStatus == 1) {
            cout << "Bluetooth: SAFE" << endl;
            cout << "STATUS: SAFE" << endl;
        } 
        else {
            cout << "Bluetooth: UNSAFE" << endl;
            cout << "STATUS: UNSAFE" << endl;
        }
    }

    return 0;
}