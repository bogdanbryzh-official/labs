#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

template <typename T>
void printElement(T t)
{
    cout << left << setw(15) << setfill(' ') << t << "|  ";
}

int main()
{
    double x, y, z;

    for (x = -2; x <= 4; x += 0.2)
    {
        for (y = -0.5; y <= 1.5; y += 0.2)
        {
            x = round(x * 10) / 10.0;
            y = round(y * 10) / 10.0;
            z = pow(tan(x + y), 2) + pow(x, 3);
            printElement(x);
            printElement(y);
            printElement(z);
            cout << endl;
        }
    }

    cin.get();

    cout << "\e[1;1H\e[2J";
}