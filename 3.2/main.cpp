#include <iostream>

using namespace std;

int main()
{
    const double k = 11;
    const double l = 5;
    cout << "k = " << k << endl;
    cout << "l = " << l << endl;

    double a = (k + l) / 5;
    cout << "a = " << a << endl;
    double b = l * k - 3.5;
    cout << "b = " << b << endl;
    double c = (l - k) / k;
    cout << "c = " << c << endl;

    if ((-1 <= a) && (a >= 5))
    {
        cout << "a: " << a << endl;
    }
    if ((-1 <= b) && (b >= 5))
    {
        cout << "b: " << b << endl;
    }
    if ((-1 <= c) && (c >= 5))
    {
        cout << "c: " << c << endl;
    }

    return 0;
}