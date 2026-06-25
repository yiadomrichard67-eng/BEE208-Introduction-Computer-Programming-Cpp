#include <iostream>
using namespace std;

int main()
{
    double temp;
    double total = 0;
    int count = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Temperature " << i << ": ";
        cin >> temp;

        if(temp < 0)
            continue;   // Skip invalid reading

        total += temp;
        count++;
    }

    if(count > 0)
        cout << "Average Temperature = "
             << total / count
             << " C";
    else
        cout << "No valid readings.";

    return 0;
}