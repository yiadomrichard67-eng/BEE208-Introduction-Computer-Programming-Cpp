#include <iostream>
using namespace std;

int main()
{
    int choice;
    double voltage, current, power, resistance, time, energy;

    cout << "1. Calculate DC Power\n";
    cout << "2. Calculate Resistance\n";
    cout << "3. Calculate Energy Consumption\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Voltage (V): ";
            cin >> voltage;
            cout << "Current (A): ";
            cin >> current;

            power = voltage * current;
            cout << "Power = " << power << " W";
            break;

        case 2:
            cout << "Voltage (V): ";
            cin >> voltage;
            cout << "Current (A): ";
            cin >> current;

            resistance = voltage / current;
            cout << "Resistance = " << resistance << " Ohms";
            break;

        case 3:
            cout << "Power (W): ";
            cin >> power;
            cout << "Time (h): ";
            cin >> time;

            energy = power * time;
            cout << "Energy = " << energy << " Wh";
            break;

        default:
            cout << "Invalid selection.";
    }

    return 0;
}