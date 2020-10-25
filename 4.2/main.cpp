#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double i, w, z, num;

    cout << "Enter number: ";
    cin >> num;

    if ((-2 <= num) && (num <= 0.5))
    {
        for (z = -2; z <= 0.5; z += 0.5)
        {
            cout << "z = " << z << endl;
            cout << "w = " << (z - sin(z)) << endl;
        }
    }
    else if ((0.5 <= num) && (num <= 3))
    {
        for (z = 0.5; z <= 3; z += 0.5)
        {
            cout << "z = " << z << endl;
            cout << "w = " << (z - sin(z)) << endl;
        }
    }

    return 0;
}