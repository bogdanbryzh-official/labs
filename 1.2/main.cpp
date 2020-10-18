#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 1.0, c = 8.0;

    bool result = (3 * x <= 0) || ((5 <= pow(x, -1)) && (pow(x, -1) < c));

    cout << "Result: " << result << endl;

    return 0;
}
