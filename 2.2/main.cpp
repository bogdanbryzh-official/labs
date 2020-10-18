#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (((a + b) < c) || ((a + c) < b) || ((b + c) < a))
    {
        cout << "This is not a triangle\n";
        return 1;
    }

    double p = a + b + c;

    cout << "Perimeter = " << p << endl;

    return 0;
}