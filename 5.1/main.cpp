#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double k, m, n, sum, product;
    sum = 0;
    product = 1;

    cout << "Enter initial for k: ";
    cin >> m;
    cout << "Enter limit: ";
    cin >> n;
    cout << endl;

    cout << "Sum: ↓↓↓" << endl;
    for (k = 4; k <= 15; k++)
    {
        sum += (pow(-1, k) * ((pow(k, 2) + 2 * k + 1) / (k + 40)));
    }
    cout << "Sum is " << sum << endl;

    cout << "Product: ↓↓↓" << endl;
    for (k = m; k <= n; k++)
    {
        product *= ((pow(k, 3)) / (k + pow(2, k)));
    }
    cout << "Product is " << product << endl;

    return 0;
}