#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x_0, eta = 0.001, x_i, x_i_plus_one;
    cout << "Enter x_0: ";
    cin >> x_0;

    x_i = x_0;
    x_i_plus_one = (1.0 / 2.0) * (100 - pow(10, x_i));

    while (fabs(x_i_plus_one - x_i) < eta)
    {
        x_i = x_i_plus_one;
        x_i_plus_one = (1.0 / 2.0) * (100 - pow(10, x_i));
    }

    cout << "Root of f(x)=0 is equal " << x_i_plus_one << endl;

    return 0;
}