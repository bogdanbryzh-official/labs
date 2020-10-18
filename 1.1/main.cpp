#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double k, x;

    cout << "Enter k: ";
    cin >> k;
    cout << "Enter x: ";
    cin >> x;

    double result = ((cos((x + k) / (k + 1)) / sin((x + k) / (k + 1))) - sqrt(fabs(log(x) - log(k)) + 1.3)) / (pow(sin(exp(-4)), 4) + pow(asin(1 / k), 2));

    cout << "Result: " << result << endl;

    return 0;
}