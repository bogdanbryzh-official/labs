#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int product = 1;

    for (int i = 10; i <= 30; i++)
    {
        if (i % 2 != 1)
        {
            product *= i;
        }
    }

    cout << "Product of even numbers from 10 to 30 = " << product << endl;

    return 0;
}