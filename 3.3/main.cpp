#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (x >= 0 && y >= 0 && (x * x + y * y <= 1))
    {
        cout << "Point belong to shape\n";
        return 1;
    }
    cout << "Point doesn't belong to shape\n";
}