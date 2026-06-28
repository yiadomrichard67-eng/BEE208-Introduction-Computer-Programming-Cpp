#include <iostream>
using namespace std;

int main()
{
    double voltage;

    cout << "Enter battery voltage: ";
    cin >> voltage;

    while(voltage >= 12)
    {
        cout << "Voltage OK: "
             << voltage << " V" << endl;

        cout << "Enter battery voltage: ";
        cin >> voltage;
    }

    cout << "Battery voltage low. Recharge required.";

    return 0;
}