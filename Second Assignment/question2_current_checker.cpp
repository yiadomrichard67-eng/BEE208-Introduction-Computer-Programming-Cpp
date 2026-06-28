#include <iostream>
using namespace std;

int main() {
    double ratedCurrent, measuredCurrent;


// Enter rated current 
    cout << "Enter rated current (A): ";
    cin >> ratedCurrent;

// Enter the measures currnt 
    cout << "Enter measured current (A): ";
    cin >> measuredCurrent;


    if(measuredCurrent > ratedCurrent)
        cout << "Overload detected. Circuit breaker should trip.";
    else
        cout << "Current is within safe limit.";

    return 0;
}