#include <iostream>
using namespace std;

int main() {
    int fsrValue, alcoholValue, strapStatus;

    // Simulated sensor input
    cout << "Enter FSR value (Helmet worn?): ";
    cin >> fsrValue;

    cout << "Enter Alcohol value: ";
    cin >> alcoholValue;

    cout << "Enter Strap status (1 = fastened, 0 = not): ";
    cin >> strapStatus;

    // Conditions
    int helmet = (fsrValue > 300) ? 1 : 0;
    int strap = (strapStatus == 1) ? 1 : 0;
    int alcohol = (alcoholValue > 400) ? 1 : 0;

    // Transmitting data (simulated)
    cout << "\nTransmitted Data: ";
    cout << helmet << "," << strap << "," << alcohol << endl;

    return 0;
}