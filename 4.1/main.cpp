#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;

    char choise;

    cout << "Choose variant: ";
    cin >> choise;

    switch (choise)
    {
    case 'a':
        for (x = 0.2; x <= 10; x += 0.8)
        {
            cout << "x = " << x << endl;
            y = (x + pow(cos(2 * x), 2)) / (x + 2);
            cout << "y = " << y << endl;
        }
        break;

    case 'b':
        for (x = 0.6; x <= 9.6; x += 1.5)
        {
            cout << "x = " << x << endl;
            y = (x + pow(cos(2 * x), 2)) / (x + 2);
            cout << "y = " << y << endl;
        }
        break;

    default:
        cout << "You didn't choose correct variant" << endl;
        break;
    }

    return 0;
}