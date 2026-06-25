#include <iostream>
using namespace std;

int main()
{
    double current;
    int safe = 0, unsafe = 0;


    for(int i = 1; i <= 8; i++)
    {
        cout << "Current reading " << i << ": ";
        cin >> current;

        if(current <= 10)
            safe++;
        else
            unsafe++;
    }

    cout << "Safe readings = " << safe << endl;
    cout << "Unsafe readings = " << unsafe << endl;

    return 0;
}