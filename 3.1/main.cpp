#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Enter x: ";
    cin >> x;

    if ((x < 0) || (x != -1))
    {
        cout << "Result: " << exp(-2.5 * pow(x, 3)) + 1 << endl;
        return 0;
    }
    else if ((1 < x) && (x <= 5.5))
    {
        cout << "Result: " << sqrt(fabs(log10(x) - log(x))) << endl;
        return 0;
    }
    else if ((x == -1) || (x > 5.5))
    {
        cout << "Result: " << ((x - 1) / (x - pow(sin(x), 2))) + 1 << endl;
        return 0;
    }
    else if ((0 <= x) && (x <= 1))
    {
        cout << "Result: " << (2 * x) << endl;
        return 0;
    }
    else
    {
        cout << "Looks like you entered something strange :D" << endl;
        return 1;
    }
}