#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter income for a: ";
    cin >> a;
    cout << "Enter income for b: ";
    cin >> b;
    cout << "Enter income for c: ";
    cin >> c;

    double average = (a + b + c) / 3;
    double minimal = min(a, min(b, c));

    cout << "The average value is greater than the minimum on " << average - minimal << endl;
}