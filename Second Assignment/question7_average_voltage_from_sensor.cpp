#include <iostream>
using namespace std;

int main()
{
    double voltage, total = 0, average;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Voltage reading " << i << ": ";
        cin >> voltage;

        total += voltage;
    }

    average = total / 10;

    cout << "Average Voltage = "
         << average << " V";

    return 0;
}