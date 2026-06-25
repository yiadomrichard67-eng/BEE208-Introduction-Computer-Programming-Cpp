#include <iostream>
using namespace std;

int main()
{
    int password;

    cout << "Enter password: ";
    cin >> password;

    while(password != 2080)
    {
        cout << "Incorrect password.\n";
        cout << "Enter password: ";
        cin >> password;
    }

    cout << "Access granted to control panel.";

    return 0;
}