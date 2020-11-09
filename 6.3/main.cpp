#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, k, sum = 0, eta = 0.01, counter = 0, a;
    cout << "Enter x: ";
    cin >> x;

    a = x;
    sum += a;

    while (a > eta)
    {
        a = (pow(x, (2 * (counter + 2) - 1)) / (2 * (counter + 2) - 1));
        sum += a;
        counter++;
    }

    cout << "Sum = " << sum << endl;
    cout << "Was made " << counter << " iterations." << endl;

    return 0;
}