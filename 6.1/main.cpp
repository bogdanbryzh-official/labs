#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, n, eta, y_i, y_i_plus_one;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter eta: ";
    cin >> eta;

    y_i = x;
    y_i_plus_one = (1 / n) * (x / (pow(y_i, (n - 1))) + y_i * (n - 1));

    while(fabs(y_i_plus_one - y_i) > eta)
    {
        y_i = y_i_plus_one;
        y_i_plus_one = (1 / n) * (x / (pow(y_i, (n - 1))) + y_i * (n - 1));
    }

    cout << "Root of the nth degree of x is equal to " << y_i_plus_one << endl;

    return 0;
}