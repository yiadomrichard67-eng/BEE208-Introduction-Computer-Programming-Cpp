#include <iostream>
using namespace std;

int main()
{
    double gpa;

    // Accept GPA
    cout << "Enter GPA: ";
    cin >> gpa;

    // Check eligibility
    if (gpa >= 3.5)
        cout << "Eligible for engineering scholarship." << endl;
    else
        cout << "Not eligible for engineering scholarship." << endl;

    return 0;
}