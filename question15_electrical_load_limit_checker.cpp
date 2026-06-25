#include <iostream>
using namespace std;

int main()
{
    double power;
    double totalLoad = 0;

    while(totalLoad <= 3000)
    {
        cout << "Enter appliance power rating (W): ";
        cin >> power;

        totalLoad += power;

        cout << "Current Total Load = "
             << totalLoad << " W" << endl;
    }

    cout << "\nLoad limit exceeded." << endl;
    cout << "Do not add more appliances." << endl;
    cout << "Final Total Load = "
         << totalLoad << " W";

    return 0;
}