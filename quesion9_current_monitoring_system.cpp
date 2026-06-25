#include <iostream>
using namespace std;

int main()
{
    double current;

    cout << "Enter current reading: ";
    cin >> current;

    while(current <= 10)
    {
        cout << "Safe current: "
             << current << " A" << endl;

        cout << "Enter current reading: ";
        cin >> current;
    }

    cout << "Overcurrent detected. Monitoring stopped.";

    return 0;
}