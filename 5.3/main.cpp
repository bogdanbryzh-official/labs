#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double dz, z, z_prev, n, sum;

    dz = 0.02;
    z_prev = 1.47;

    for (n = 2; n <= 15; n++)
    {
        // cout << "z_prev = " << z_prev << endl;
        z = z_prev * n - dz;
        // cout << "z = " << z << endl;
        sum += ((pow(z_prev, 3) - pow(z, 2)) / (z_prev + z));
        z_prev = z;
    }
    cout << "Sum is: " << sum << endl;

    return 0;
}