#include <iostream>
#include <string>
using namespace std;

int main() {
    int fsrValue;
    int strapStatus;

    int fsrThreshold = 300;

    cout << "SMART HELMET SYSTEM (Simulation)\n";

    while (true) {

        // Simulated inputs
        cout << "\nEnter FSR value: ";
        cin >> fsrValue;

        cout << "Enter Strap Status (1 = Fastened, 0 = Not): ";
        cin >> strapStatus;

        cout << "\nFSR: " << fsrValue << " | Strap: " << strapStatus << endl;

        // ✅ SAFE CONDITION
        if (fsrValue > fsrThreshold && strapStatus == 1) {

            cout << "Relay: ON (Ignition Allowed)" << endl;
            cout << "Buzzer: OFF" << endl;
            cout << "Bluetooth: SAFE" << endl;
        }

        // ❌ UNSAFE CONDITION
        else {

            cout << "Relay: OFF (Ignition Blocked)" << endl;
            cout << "Buzzer: ON (Alert)" << endl;
            cout << "Bluetooth: UNSAFE" << endl;
        }
    }

    return 0;
}