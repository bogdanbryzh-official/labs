#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    double x = atan((exp(a) + exp(1 / b) / (sqrt(a + exp(1)))));
    double y = 2 * a * cbrt(a + b);
    double z = (fabs(x - 1) + exp(-y) / (12.34 - log10(sqrt(fabs(x)))));

    cout << "x = " << x;
    cout << "\ny = " << y;
    cout << "\nz = " << z << endl;

    return 0;
}
