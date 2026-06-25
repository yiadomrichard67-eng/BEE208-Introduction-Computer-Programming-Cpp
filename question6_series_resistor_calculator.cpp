#include <iostream>
using namespace std;

int main()
{
    double resistor, totalResistance = 0;

    // Read 5 resistor values
    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter resistor " << i << " (Ohms): ";
        cin >> resistor;

        totalResistance += resistor;
    }

    cout << "Total Resistance = "
         << totalResistance
         << " Ohms";

    return 0;
}