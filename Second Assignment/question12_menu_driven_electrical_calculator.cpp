#include <iostream>
using namespace std;

int main()
{
    int choice;
    double voltage, current, power, resistance, time, energy;

    do
    {
        cout << "\n1. Calculate Power\n";
        cout << "2. Calculate Resistance\n";
        cout << "3. Calculate Energy\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Voltage: ";
                cin >> voltage;
                cout << "Current: ";
                cin >> current;
                cout << "Power = "
                     << voltage * current
                     << " W\n";
                break;

            case 2:
                cout << "Voltage: ";
                cin >> voltage;
                cout << "Current: ";
                cin >> current;
                cout << "Resistance = "
                     << voltage / current
                     << " Ohms\n";
                break;

            case 3:
                cout << "Power: ";
                cin >> power;
                cout << "Time: ";
                cin >> time;
                cout << "Energy = "
                     << power * time
                     << " Wh\n";
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while(choice != 4);

    return 0;
}